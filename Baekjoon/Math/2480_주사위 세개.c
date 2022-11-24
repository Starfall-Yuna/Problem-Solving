#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2480번 코드
//풀이:: https://smary-it.tistory.com/31

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b || b == c || a == c) {
		if (a == b || a == c) {
			printf("%d", 1000 + a * 100);
		}
		else {
			printf("%d", 1000 + b * 100);
		}
	}
	else {
		if (a > b && a > c) {
			printf("%d", 100 * a);
		}
		else if (b > c) {
			printf("%d", 100 * b);
		}
		else {
			printf("%d", 100 * c);
		}
	}
}
