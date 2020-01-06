#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int cnt=0;
int result[50] = { 0, };
int buf[50] = { 0, };
int stack(string s) {
	int push_value = 0, pop_value = 0, size=0;
	//pop 기능
	if (s.find("pop") != string::npos) {
		if (cnt <= 0) {
			cout << "stack이 없습니다." << endl;
			cnt = -1;
			return cnt;
		}
		else {
			pop_value = buf[0];

			//stack 값 이동
			for (int i = 0; i < cnt; i++) {
				buf[i] = buf[i + 1];
			}
			cnt -= 1;
		}
//		cout << "remain stack :: " << endl;
		for (int i = 0; i < cnt; i++) {
//			cout << "index " <<i << " "<<buf[i] << endl;
		}
		return pop_value;
	}
	// top 출력
	if (s.find("top") != string::npos) {
		if (cnt == -1) {
			return cnt;
		}
		return buf[0];
	}
	//size 출력
	if (s.find("size") != string::npos) {
		return cnt;
	}

	// push 기능
	if (s.find("push") != string::npos) {
		push_value = atoi(s.substr(5).c_str());
		for (int i = cnt; i > 0; i--) {
			buf[i] = buf[i-1];
		}
		buf[0] = push_value;
		cnt += 1;
		return push_value;
	}
	if (s.find("empty") != string::npos) {
		if (cnt <= 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
}
int main() {
	int t = 0; // testcase

	string str;
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++) {
		getline(cin, str);
		result[i]=stack(str);
	}
	for (int i = 0; i < t; i++) {
		cout << result[i] << endl;
	}
}