#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 1008번 코드
//풀이:: https://smary-it.tistory.com/4

int main() {
	int a,b;
	float s;
	scanf("%d %d", &a, &b);
	printf("%.9f", (double)a / b);
}
