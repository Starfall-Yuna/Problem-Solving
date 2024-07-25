#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <string>
using namespace std;

//백준 10820번 코드
//풀이:: https://smary-it.tistory.com/77

int main() {
	string ch;
	while (getline(cin, ch)) {
		int cnt[4] = { 0 };
		for (int i = 0; i < ch.length(); i++) {
			if (ch[i] >= 'a' && ch[i] <= 'z') {
				cnt[0]++;
			}
			else if (ch[i] >= 'A' && ch[i] <= 'Z') {
				cnt[1]++;
			}
			else if (ch[i] == ' ') {
				cnt[3]++;
			}
			else {
				cnt[2]++;
			}
		}
		for (int i = 0; i < 4; i++) {
			cout << cnt[i] << " ";
		}
		cout << endl;
	}
}