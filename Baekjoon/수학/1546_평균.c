#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 1546번 코드
//풀이:: https://smary-it.tistory.com/15

double a[1000];
int main() {
	int n;
	scanf("%d", &n);
	int max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
		if (max < a[i]) {
			max = a[i];
		}
	}

	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum+= a[i] / max * 100;
	}
	printf("%f", sum / n);
}
