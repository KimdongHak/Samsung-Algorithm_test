#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string convert(string s) {
	int cnt = 0;
	string str_s;
	string stack[100]; //stack 배열
	for (int i = 0; i < s.size(); i++) {
		stack[cnt] = s[i];
		cout << "stack:: "<<stack << '\n';
		if (s[i] == ' ') {
			cout << "cnt :: " << cnt << '\n';
			for (int i = cnt; i > -1; i--) {
				
				
				str_s = str_s + stack[cnt];
				cout << "str_s :: " << str_s << '\n';
				cnt -= 1;
			}
		}
		else {
			cnt += 1;
		}
	}
	cout << str_s << '\n';
	return str_s;
}
int main() {
	int t = 0; // testcase
	string str;
	string print[100];
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