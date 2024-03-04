#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

//백준 10250번 코드
//풀이 :: https://smary-it.tistory.com/69

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int h, w, n;
		cin >> h >> w >> n;

		int num = 0;
		if (n % h == 0) { num += 100 * h + n / h; }
		else { num += 100 * (n % h) + n / h + 1; }
		cout << num << endl;
	}
}