#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

//백준 1919번 코드
//풀이:: https://smary-it.tistory.com/16

char a[1000], b[1000];
int main() {
	scanf("%s %s", &a, &b);

	int sum = strlen(a) + strlen(b);
	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j < strlen(b); j++) {
			if (a[i] == b[j]) {
				a[i] = -1;	b[j] = -2;
				sum -= 2;
			}
		}
	}
	printf("%d", sum);
}
