#include<iostream>
using namespace std;
string valid(string s) {
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			cnt += 1;
		}
		else {
			cnt -= 1;
		}
		if (cnt < 0) {
			return "NO"; // 여는 괄호 부족
		}
	}
	//모든 과정 끝
	if (cnt == 0) {
		return "YES"; // 스택이 비어있다.
	}
	else {
		return "NO"; //스택이 비어있지 않다. = 닫는괄호가 부족
	}
}
int main() {

}