#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2501번 코드
//풀이:: https://smary-it.tistory.com/32

int main() {
	int n, num;
	scanf("%d %d", &n, &num);

	int i, a = 0;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) { a++; }
		if (a == num) { 
			printf("%d", i);
			return 0; 
		}
	}
	printf("0");
}
