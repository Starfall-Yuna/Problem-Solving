#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 1075번 코드
//풀이:: https://smary-it.tistory.com/6

int main() {
	int n, f;
	scanf("%d %d", &n, &f);

	n -= n % 100; //뒤의 두 자릿수 00으로 정리

	int a1, a2;
	for (a1 = 0; a1 < 10; a1++) {
		for (a2 = 0; a2 < 10; a2++) {
			int num = n + a1 * 10 + a2;
			if (num % f == 0) {
				printf("%d%d", a1, a2);
				return 0;
			}
		}
	}
}
