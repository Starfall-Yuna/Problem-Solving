#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2739번 코드
//풀이 :: https://smary-it.tistory.com/43

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
}