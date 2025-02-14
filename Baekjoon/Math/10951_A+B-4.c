#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 10951번 코드
//풀이 :: https://smary-it.tistory.com/84

int main() {
	int a, b;

	while (scanf("%d%d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
	return 0;
}