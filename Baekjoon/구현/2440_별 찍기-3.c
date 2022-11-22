#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2440번 코드
//풀이:: https://smary-it.tistory.com/25

int main() {
	int n;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
