#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <stack>
#include <string>
using namespace std;

//백준 10773번 코드
//풀이 :: https://smary-it.tistory.com/71

int main() {
	stack<int> s;
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num != 0) {
			s.push(num);
		}
		else {
			s.pop();
		}
	}

	int sum = 0;
	int size = s.size();
	if (!s.empty()) {
		for (int i = 0; i < size; i++) {
			sum += s.top();
			s.pop();
		}
	}
	cout << sum;
}