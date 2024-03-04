#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 8393번 코드
//풀이 :: https://smary-it.tistory.com/61

int main() {
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}

	printf("%d", sum);
}