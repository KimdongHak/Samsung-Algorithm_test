//�Ϸ� - ��Ÿ�ӿ���

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string convert(string s) {
	int cnt = 0;
	string str_s;
	string stack[100]; //stack �迭
	for (int i = 0; i < s.size() + 1; i++) {
		stack[cnt] = s[i];
		if (s[i] == ' ' || s[i] == '\0') {
			for (int i = cnt - 1; i >= 0; i--) {
				str_s = str_s + stack[i];
			}
			cnt = 0; // ���ð� �ʱ�ȭ
			str_s = str_s + ' '; // ���� �߰�
		}
		else {
			cnt += 1; // ���ð� ����
		}
	}
	return str_s;
}
int main() {
	int t = 0; // testcase
	string str;
	string print[100]; //testcase�� ���� print Ƚ��
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