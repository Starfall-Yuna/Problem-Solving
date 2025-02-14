#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

//백준 11050번 코드
//풀이 :: https://smary-it.tistory.com/90

int fac(int n) {
	if (n == 0) {
		return 1;	// 입력값 0일 때도 고려하기
	}
	if (n == 1) {
		return 1;
	}
	else { return n * fac(n - 1); }
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << fac(n) / (fac(k) * fac(n - k));
}