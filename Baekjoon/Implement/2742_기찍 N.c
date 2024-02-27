#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2742번 코드
//풀이 :: https://smary-it.tistory.com/45

int main() {
	int n;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		printf("%d\n", i);
	}
}