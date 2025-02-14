#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 11021번 코드
//풀이 :: https://smary-it.tistory.com/88

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a,b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i + 1, a + b);
	}
}