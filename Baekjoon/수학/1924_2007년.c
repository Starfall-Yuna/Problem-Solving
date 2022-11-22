#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 1924번 코드
//풀이:: https://smary-it.tistory.com/17

int main() {
	int m, n;
	scanf("%d %d", &m, &n);

	for (int i = m - 1; i > 0; i--) {
		if (i == 2) { n += 28; }
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			n += 30;
		}
		else { n += 31; }
	}

	switch (n % 7) {
	case 0:	printf("SUN"); break;
	case 1:	printf("MON"); break;
	case 2:	printf("TUE"); break;
	case 3:	printf("WED"); break;
	case 4:	printf("THU"); break;
	case 5:	printf("FRI"); break;
	case 6:	printf("SAT"); break;
	}
}
