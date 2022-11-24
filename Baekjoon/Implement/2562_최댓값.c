#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2562번 코드
//풀이:: https://smary-it.tistory.com/37

int main() {
	int n[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]);
	}

	int max = 0;
	int maxindex = 0;
	for (int i = 0; i < 9; i++) {
		if (max < n[i]) {
			max = n[i];
			maxindex = i+1;
		}
	}

	printf("%d\n%d", max, maxindex);
}
