#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 3052번 코드
//풀이 :: https://smary-it.tistory.com/55

int q[42];
int main() {
	int n[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
		q[n[i] % 42]++;
	}

	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (q[i] > 0) {
			count++;
		}
	}
	printf("%d", count);
}