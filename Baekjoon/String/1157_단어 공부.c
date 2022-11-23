#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

//백준 1157번 코드
//풀이:: https://smary-it.tistory.com/10

char ch[1000000];
int count[26];
int main() {
	for (int i = 0; scanf("%c", &ch[i])!=EOF; i++) {
		if (ch[i] >= 'A' && ch[i] <= 'Z') {
			count[ch[i] - 'A']++;
		}
		else {
			count[ch[i] - 'a']++;
		}
	}

	int max = 0;	char c;
	for (int i = 0; i < 26; i++) {
		if (max < count[i]) { max = count[i];	c = i + 'A'; }
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (max == count[i]) { cnt++; }
	}
	
	if (cnt == 1) { printf("%c", c); }
	else { printf("?"); }
}
