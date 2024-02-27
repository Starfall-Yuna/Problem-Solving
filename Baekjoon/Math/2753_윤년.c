#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2753번 코드
//풀이 :: https://smary-it.tistory.com/47

int main() {
	int n;
	scanf("%d", &n);

	int result = 0;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
		result = 1;
	}

	printf("%d\n", result);
}