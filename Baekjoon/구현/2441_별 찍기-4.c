#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2441번 코드
//풀이:: https://smary-it.tistory.com/26

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = n - i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}
