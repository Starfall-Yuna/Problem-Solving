#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2439번 코드
//풀이:: https://smary-it.tistory.com/24

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n-1; j >= 0; j--) {
			if (j > i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
}
