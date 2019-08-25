#include<iostream>
#include<string.h>
using namespace std;
int t = 0; // testcase

bool match(const string& w, const string& s) {
	int pos = 0;
	while (pos < s.size() && pos < w.size() && (w[pos] == '?' || w[pos] == s[pos]))
		++pos;

	// 2. reach pattern's end case
	if (pos == w.size())
		return pos == s.size();

	// 4. meet '*' 
	if (w[pos] == '*')
		for (int skip = 0; pos + skip <= s.size(); ++skip)
			if (match(w.substr(pos + 1), s.substr(pos + skip)))
				return true;
	return false;
}
int main() {
	string voca[100];
	string pattern;
	char cont(97);
	while (cont != 'N') {
		cin >> pattern;
		cin >> t;
		for (int i = 0; i < t; i++)
			cin >> voca[i];
		for (int i = 0; i < t; i++) {
			if (match(pattern, voca[i]) == true) {
				cout << "result :: " << voca[i] << endl;
			}
		}
		cout << "continue? (Y/N) ";
		cin >> cont;
	}
	return 0;
}