#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <string>;
using namespace std;

//백준 4458번 코드
//풀이 :: https://smary-it.tistory.com/57

int main() {
	int n;
	cin >> n;
	cin.ignore();

	string ch;
	for (int i = 0; i < n; i++) {
		getline(cin, ch);
		if (ch[0] >= 'a' && ch[0] <= 'z') {
			ch[0] -= 32;
		}
		cout << ch << endl;
	}
}