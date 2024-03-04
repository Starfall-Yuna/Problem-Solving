#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <stack>
#include <string>
using namespace std;

//백준 9012번 코드
//풀이 :: https://smary-it.tistory.com/63

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		stack<int> s;
		string str;
		cin >> str;	//미리 문자열 전체 입력받기
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') { s.push(1); }	// ( 글자 만나면 푸쉬
			else {
				if (!s.empty()) { s.pop(); }	// 1이 있을 때 ) 만나면 팝
				else {
					s.push(1);
					break;	// 비어있을 때 ) 만나면 푸쉬 후 스택 작업 끝내기
							// (어차피 NO 출력하게끔)
				}
			}
		}
		if (s.empty()) { cout << "YES\n"; }	// 비어있으면 YES
		else{ cout << "NO\n"; }		// 비어있지 않으면 NO
	}
}