#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2869번 코드
//풀이 :: https://smary-it.tistory.com/51

int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	
	int d = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0) { d++; }
	printf("%d", d);
}