#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 9498번 코드
//풀이 :: https://smary-it.tistory.com/64

int main() {
	int n;
	scanf("%d", &n);
	
	if (n >= 90) { printf("A"); }
	else if (n < 90 && n >= 80) { printf("B"); }
	else if (n < 80 && n >= 70) { printf("C"); }
	else if (n < 70 && n >= 60) { printf("D"); }
	else { printf("F"); }
}