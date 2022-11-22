#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 1934번 코드
//풀이:: https://smary-it.tistory.com/18

int main() {
	int n;
	scanf("%d", &n);

	int a, b;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		int num = 1;
		int a1 = a;	int b1 = b;
		for (int j = a1; j > 0; j--) {
			if (a1 % j == 0 && b1 % j == 0) {
				num *= j;
				a1 /= j; b1 /= j;
			}
		}
		printf("%d\n", a * b / num);
	}
}
