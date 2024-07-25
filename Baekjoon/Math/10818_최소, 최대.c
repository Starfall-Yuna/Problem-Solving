#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 10818번 코드
//풀이:: https://smary-it.tistory.com/76

int main() {
	int n;
	scanf("%d", &n);

	int a;
	int min = 1000000;
	int max = -1000000;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (max < a) { max = a; }
		if (min > a) { min = a; }
	}

	printf("%d %d", min, max);
}