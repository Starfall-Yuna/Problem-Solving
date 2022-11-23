#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 1330번 코드
//풀이:: https://smary-it.tistory.com/13

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b)	printf(">");
	else if (a == b)	printf("==");
	else printf("<");
}
