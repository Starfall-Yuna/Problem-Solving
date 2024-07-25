#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

//백준 10808번 코드
//풀이:: https://smary-it.tistory.com/74

char ch[100];
int c[26];
int main() {
	scanf("%s", &ch);
	for (int i = 0; i<strlen(ch); i++) {
		c[ch[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", c[i]);
	}
}