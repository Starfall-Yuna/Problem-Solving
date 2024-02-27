#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

//백준 2908번 코드
//풀이 :: https://smary-it.tistory.com/53

char c1[4];
char c2[4];
int main() {
	scanf("%s", &c1);
	scanf("%s", &c2);
	
	int t1, t2;
	t1 = c1[0];	c1[0] = c1[2];	c1[2] = t1;
	t2 = c2[0];	c2[0] = c2[2];	c2[2] = t2;

	for (int i = 0; i < 3; i++) {
		if (c1[i] > c2[i]) { printf("%s", c1);	break; }
		else if (c1[i] < c2[i]) { printf("%s", c2);	break; }
	}
}