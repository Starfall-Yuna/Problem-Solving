#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <stack>
#include <string>
using namespace std;

//백준 10828번 코드
//풀이:: https://smary-it.tistory.com/78

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);	//시간초과로 추가함
	stack<int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string c;
		cin >> c;
		if (c == "push") {
			int num;	cin >> num;
			s.push(num);
		}
		else if (c == "pop") {
			if (s.empty()) { cout << "-1\n"; }
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (c == "top") {
			if (s.empty()) { cout << "-1\n"; }
			else {
				cout << s.top() << "\n";
			}
		}
		else if (c == "size") {
			cout << s.size() << "\n";
		}
		else if (c == "empty") {
			if (s.empty()) { cout << "1\n"; }
			else { cout << "0\n"; }
		}
	}
}