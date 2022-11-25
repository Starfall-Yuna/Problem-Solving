#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2588번 코드
//풀이:: https://smary-it.tistory.com/39

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int n1 = a * (b % 10);
	int n2 = a * (b % 100 / 10);
	int n3 = a * (b / 100);
	int result = n1 + n2 * 10 + n3 * 100;

	printf("%d\n%d\n%d\n%d\n", n1, n2, n3, result);
}
