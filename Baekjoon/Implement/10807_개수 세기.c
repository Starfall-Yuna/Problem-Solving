#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 10807번 코드
//풀이:: https://smary-it.tistory.com/73

int arr[100];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int cnt;
	scanf("%d", &cnt);

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == cnt) { count++; }
	}
	printf("%d", count);
}