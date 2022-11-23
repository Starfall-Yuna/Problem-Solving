#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <stack>
#include <string>
using namespace std;

//백준 1935번 코드
//풀이:: https://smary-it.tistory.com/19

int main() {
	cout << fixed;
	cout.precision(2);
	stack<double> s;
	int n;	string ch;	int num[26];
	cin >> n;
	cin >> ch;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < ch.length(); i++) {
		if (ch[i] == '+' || ch[i] == '-' || ch[i] == '*' || ch[i] == '/') {
			double a = s.top();	s.pop();
			double b = s.top();	s.pop();
			double result;
			switch (ch[i]) {
			case '+':	result = a + b;	break;
			case '-':	result = b - a;	break;
			case '*':	result = a * b;	break;
			case '/':	result = b / a;	break;
			}
			s.push(result);
		}
		else {
			s.push(num[ch[i]-'A']);
		}
	}
	cout << s.top() << endl;
}
