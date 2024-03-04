#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 10039번 코드
//풀이 :: https://smary-it.tistory.com/66

int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		if (a[i] < 40) {
			a[i] = 40;
		}
	}

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}
	printf("%d", sum / 5);
}