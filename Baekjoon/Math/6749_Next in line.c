#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 6749번 코드
//풀이 :: https://smary-it.tistory.com/60

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int c = b - a;
	printf("%d", b + c);
}