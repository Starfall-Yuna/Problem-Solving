#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2442번 코드
//풀이:: https://smary-it.tistory.com/27

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
