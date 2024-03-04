#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

//백준 5596번 코드
//풀이 :: https://smary-it.tistory.com/59

int main() {
	int a;
	int sum1 = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a;
		sum1 += a;
	}
	int sum2 = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a;
		sum2 += a;
	}
	
	if (sum1 >= sum2) { cout << sum1; }
	else { cout << sum2; }
}