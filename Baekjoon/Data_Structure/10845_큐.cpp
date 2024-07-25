#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <queue>
#include <string>
#define endl '\n'
using namespace std;

//백준 10845번 코드
//풀이:: https://smary-it.tistory.com/79

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);	// 시간초과로 추가함
	queue<int> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string ch;
		cin >> ch;
		if (ch == "push") {
			int num;	cin >> num;
			q.push(num);
		}
		else if (ch == "pop") {
			if (q.empty()) { cout << -1 << endl; }
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (ch == "size") {
			cout << q.size() << endl;
		}
		else if (ch == "empty") {
			if (q.empty()) { cout << 1 << endl; }
			else { cout << 0 << endl; }
		}
		else if (ch == "front") {
			if (q.empty()) { cout << -1 << endl; }
			else {
				cout << q.front() << endl;
			}
		}
		else if (ch == "back") {
			if (q.empty()) { cout << -1 << endl; }
			else {
				cout << q.back() << endl;
			}
		}
	}
	
}