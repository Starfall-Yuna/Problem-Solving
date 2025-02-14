#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 11023번 코드
//풀이 :: https://smary-it.tistory.com/89

int main() {
	int n;
	int sum = 0;
	while (scanf("%d", &n) != EOF) {
		sum += n;
	}
	printf("%d", sum);
}