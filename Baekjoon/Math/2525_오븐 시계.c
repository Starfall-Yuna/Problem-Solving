#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2525번 코드
//풀이:: https://smary-it.tistory.com/33

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	int num;
	scanf("%d", &num);

	m += num;
	if (m >= 60) {
		h += (m / 60);
		m %= 60;
	}
	if (h > 23) {
		h -= 24;
	}
	printf("%d %d", h, m);
}
