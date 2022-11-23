#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 1978번 코드
//풀이:: https://smary-it.tistory.com/20

int arr[200];
int main() {
	int n;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 2; i < 1000; i++) {
		if (i % 2 == 0 && i != 2) {
			continue;
		}
		int cnt = 0;
		for (int j = 3; j < i; j++) {
			if (i % j == 0) { cnt++; break; }
		}
		if (cnt != 0) { continue; }

		for (int j = 0; j < n; j++) {
			if (arr[j] == i) { count++; }
		}
	}
	printf("%d", count);
}
