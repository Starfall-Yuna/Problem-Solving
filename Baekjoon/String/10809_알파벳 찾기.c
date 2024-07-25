#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

//백준 10809번 코드
//풀이:: https://smary-it.tistory.com/75

char ch[100];
int a[26];
int main() {
	scanf("%s", ch);
	for (int i = 0; i < strlen(ch); i++) {
		if (a[ch[i]-'a'] != 0) { continue; }
		a[ch[i] - 'a'] = i + 1;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", a[i] - 1);
	}
}