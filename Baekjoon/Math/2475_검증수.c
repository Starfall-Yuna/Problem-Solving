#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2475번 코드
//풀이:: https://smary-it.tistory.com/30

int main() {
	int a[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		sum += a[i]*a[i];
	}
	printf("%d", sum % 10);
}
