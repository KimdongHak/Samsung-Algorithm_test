//완료 - 런타임에러

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string convert(string s) {
	int cnt = 0;
	string str_s;
	string stack[100]; //stack 배열
	for (int i = 0; i < s.size() + 1; i++) {
		stack[cnt] = s[i];
		if (s[i] == ' ' || s[i] == '\0') {
			for (int i = cnt - 1; i >= 0; i--) {
				str_s = str_s + stack[i];
			}
			cnt = 0; // 스택값 초기화
			str_s = str_s + ' '; // 공백 추가
		}
		else {
			cnt += 1; // 스택값 증가
		}
	}
	return str_s;
}
int main() {
	int t = 0; // testcase
	string str;
	string print[100]; //testcase에 따른 print 횟수
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++) {
		getline(cin, str);
		print[i] = convert(str);
	}
	for (int i = 0; i < t; i++) {
		cout << print[i] << '\n';
	}

}