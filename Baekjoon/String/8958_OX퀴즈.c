#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

//백준 8958번 코드
//풀이 :: https://smary-it.tistory.com/62

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char ch[80] = { 0 };
		scanf("%s", &ch);
		
		int sum = 0;	int cnt = 0;
		for (int j = 0; j < strlen(ch); j++) {
			if (ch[j] == 'O') { cnt++; sum += cnt; }
			else { cnt = 0; }
		}
		printf("%d\n", sum);
	}
}