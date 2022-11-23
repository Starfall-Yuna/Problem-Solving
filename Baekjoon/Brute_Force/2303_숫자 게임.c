#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//백준 2303번 코드
//풀이:: https://smary-it.tistory.com/22

int a[10];
int main() {
    int n, max=0, max1=0, ans=0;
    int i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 5; j++) {
            scanf("%d", &a[j]);
        }
        max1 = 0;
        if ((a[1] + a[2] + a[3]) % 10 >= max1) {
            max1 = (a[1] + a[2] + a[3]) % 10;
        }
        if ((a[1] + a[2] + a[4]) % 10 >= max1) {
            max1 = (a[1] + a[2] + a[4]) % 10;
        }
        if ((a[1] + a[2] + a[5]) % 10 >= max1) {
            max1 = (a[1] + a[2] + a[5]) % 10;
        }
        if ((a[1] + a[3] + a[4]) % 10 >= max1) {
            max1 = (a[1] + a[3] + a[4]) % 10;
        }
        if ((a[1] + a[3] + a[5]) % 10 >= max1) {
            max1 = (a[1] + a[3] + a[5]) % 10;
        }
        if ((a[1] + a[4] + a[5]) % 10 >= max1) {
            max1 = (a[1] + a[4] + a[5]) % 10;
        }
        if ((a[2] + a[3] + a[4]) % 10 >= max1) {
            max1 = (a[2] + a[3] + a[4]) % 10;
        }
        if ((a[2] + a[3] + a[5]) % 10 >= max1) {
            max1 = (a[2] + a[3] + a[5]) % 10;
        }
        if ((a[2] + a[4] + a[5]) % 10 >= max1) {
            max1 = (a[2] + a[4] + a[5]) % 10;
        }
        if ((a[3] + a[4] + a[5]) % 10 >= max1) {
            max1 = (a[3] + a[4] + a[5]) % 10;
        }
        if (max1 >= max) {
            max = max1;
            ans = i;
        }
    }
    printf("%d", ans);
}
