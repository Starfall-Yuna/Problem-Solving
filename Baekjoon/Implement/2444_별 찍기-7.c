#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2444번 코드
//풀이:: https://smary-it.tistory.com/29

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n*2; i++) {
		int a, b;
		if (i <= n) { a = i;	b = i * 2 - 1; }
		else { a = n * 2 - i;	b = (n * 2 - i) * 2 - 1; }

		for (int j = n; j > a; j--) {
			printf(" ");
		}
		for (int k = 0; k < b; k++) {
			printf("*");
		}
		printf("\n");
	}
}
