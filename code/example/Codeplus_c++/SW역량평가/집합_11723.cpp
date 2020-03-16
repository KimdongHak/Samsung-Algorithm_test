// 11723_집합.cpp - 실패

#include<iostream>
#include<vector>
using namespace std;
vector <int> S, result;
int solve(string sent, int n) {
	if (sent == "add")
		S.push_back(n);
	else if (sent == "remove") {
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == n) {
				S.erase(S.begin() + i);
			}
		}
	}
	else if (sent == "check") {
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == n) {
				result.push_back(1);
				break;
			}
			else {
				if (i == (S.size() - 1))
					result.push_back(0);
				else
					continue;


			}
		}
	}
	else if (sent == "toggle") {
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == n) {
				S.erase(S.begin() + i);
				break;
			}
			else {
				if (i == (S.size() - 1))
					S.push_back(n);
				else
					continue;

			}
		}
	}
	else if (sent == "all") {
		S.clear();
		for (int i = 1; i < 21; i++) {
			S.push_back(i);
		}
	}
	else if (sent == "empty") {
		S.clear();
	}
	else {}
	return 0;
}
int main() {
	int m, num;
	string st;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> st >> num;
		solve(st, num);
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}
	return 0;
}