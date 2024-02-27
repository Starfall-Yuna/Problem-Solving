#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2920번 코드
//풀이 :: https://smary-it.tistory.com/54

int a[8];
int main() {
	for (int i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
	}

	int num = a[0];
	if (num == 1) {
		for (int i = 1; i < 8; i++) {
			num++;
			if (a[i] != num) { break; }
			if (i == 7) {
				printf("ascending\n");	return 0;
			}
		}
	}
	else if (num == 8) {
		for (int i = 1; i < 8; i++) {
			num--;
			if (a[i] != num) { break; }
			if (i == 7) {
				printf("descending\n");	return 0;
			}
		}
	}
	printf("mixed\n");
}