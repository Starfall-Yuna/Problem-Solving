#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 10952번 코드
//풀이 :: https://smary-it.tistory.com/85

int main() {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		printf("%d\n", a + b);
	}
}