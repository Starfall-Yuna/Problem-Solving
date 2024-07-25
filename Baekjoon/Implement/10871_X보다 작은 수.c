#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 10871번 코드
//풀이:: https://smary-it.tistory.com/82

int a[10000];
int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (x > a[i]) {
			printf("%d ", a[i]);
		}
	}
}