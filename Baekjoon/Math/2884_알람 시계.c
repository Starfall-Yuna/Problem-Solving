#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2884번 코드
//풀이 :: https://smary-it.tistory.com/52

int main() {
	int h, m;
	scanf("%d %d", &h, &m);

	if (m >= 45) {
		m -= 45;
	}
	else {
		if (h == 0) { h = 23; }
		else { h--; }
		m += 15;
	}

	printf("%d %d", h, m);
}