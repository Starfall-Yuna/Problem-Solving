#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

//백준 2675번 코드
//풀이:: https://smary-it.tistory.com/42

int main() {
	int n;
	scanf("%d", &n);
	int r;
	for (int i = 0; i < n; i++) {
		char s[25] = { 0 }, result[200] = { 0 };
		scanf("%d %s", &r, &s);
		int k = 0;
		for (int j = 0; j < strlen(s); j++) {
			while (k < r * strlen(s)) {
				result[k] = s[j];
				k++;
				if (k % r == 0) { break; }
			}
		}
		printf("%s\n", result);
	}
}
