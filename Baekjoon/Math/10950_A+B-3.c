#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 10950번 코드
//풀이 :: https://smary-it.tistory.com/83

int main() {
	int n, a = 0, b = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}