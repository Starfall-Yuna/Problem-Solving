#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <stack>
using namespace std;

//백준 10799번 코드
//풀이 :: https://smary-it.tistory.com/72

int main() {
	stack<char> s;
	string ch;
	cin >> ch;

	int sum = 0;
	for (int i = 0; i < ch.length(); i++) {
		if (ch[i] == '(') { s.push('('); }
		else {
			if (ch[i - 1] == '(') { s.pop(); sum += s.size(); }
			else { s.pop(); sum += 1; }
		}
	}

	cout << sum;
}