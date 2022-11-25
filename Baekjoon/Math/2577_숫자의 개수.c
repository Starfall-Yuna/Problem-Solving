#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 2577번 코드
//풀이:: https://smary-it.tistory.com/38

int arr[10];
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int r = a * b * c;
	int cnt = 1;
	while (cnt < r) {
		arr[r % (cnt * 10) / cnt]++;
		cnt *= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}
