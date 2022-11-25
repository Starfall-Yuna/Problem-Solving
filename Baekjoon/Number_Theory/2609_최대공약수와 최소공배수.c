#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2609번 코드
//풀이:: https://smary-it.tistory.com/41

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int min;
	if (a > b) { min = b; }
	else { min = b; }

	int num = 1;
	int a1 = a;	int b1 = b;
	for (int i = min; i > 0; i--) {
		if (a1 % i == 0 && b1 % i == 0) {
			num *= i;
			a1 /= num;	b1 /= num;
		}
	}

	printf("%d\n%d\n", num, a * b / num);
}
