#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

//백준 4153번 코드
//풀이 :: https://smary-it.tistory.com/56

int main() {
	int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) { break; }
		
		if ((c * c == a * a + b * b) || (b * b == a * a + c * c) || (a * a == c * c + b * b)) {
			cout << "right" << endl;
		}
		else {
			cout << "wrong" << endl;
		}
	}
}