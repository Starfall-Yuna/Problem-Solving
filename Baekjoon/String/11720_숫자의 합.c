#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 11720번 코드
//풀이 :: https://smary-it.tistory.com/92

char arr[100];
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %c", &arr[i]);
		sum += arr[i] - 48;
	}
	printf("%d", sum);
}