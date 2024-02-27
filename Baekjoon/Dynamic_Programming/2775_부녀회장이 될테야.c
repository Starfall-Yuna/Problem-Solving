#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2775번 코드
//풀이 :: https://smary-it.tistory.com/48

int arr[14][15];
int main() {
	for (int i = 0; i <= 14; i++) {
		for (int j = 1; j <= 14; j++) {
			if (i == 0 || j == 1) { arr[i][j] = j; }
			else {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	}

	int t;	int k, n;
	scanf("%d", &t);
	for (int m = 0; m < t; m++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
}