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
			return "NO"; // ���� ��ȣ ����
		}
	}
	//��� ���� ��
	if (cnt == 0) {
		return "YES"; // ������ ����ִ�.
	}
	else {
		return "NO"; //������ ������� �ʴ�. = �ݴ°�ȣ�� ����
	}
}
int main() {
	int t = 0; // testcase
	string sen[100];
	string input;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> input;
		sen[i] = valid(input);
	}
	for (int i = 0; i < t; i++) {
		cout << sen[i] << '\n';
	}

}