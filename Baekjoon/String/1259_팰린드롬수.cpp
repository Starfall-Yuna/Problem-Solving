#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <string>
using namespace std;

//백준 1259번 코드
//풀이:: https://smary-it.tistory.com/11

int main() {
	string ch;
	while (1) {
		cin >> ch;
		if (ch == "0") { break; }
		int no = 0;
		for (int i = 0; i < ch.length() / 2; i++) {
			if (ch[i] != ch[ch.length() - i - 1]) {
				no++;	break;
			}
		}
		if (no == 0) { cout << "yes" << endl; }
		else { cout << "no" << endl; }
	}
}
