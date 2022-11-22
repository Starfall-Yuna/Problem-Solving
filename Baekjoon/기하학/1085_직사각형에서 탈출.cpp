#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

//백준 1085번 코드
//풀이:: https://smary-it.tistory.com/7

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	int a, b;
	a = x < w - x ? x : w - x;
	b = y < h - y ? y : h - y;
	if (a > b) {
		cout << b;
	}
	else {
		cout << a;
	}
}
