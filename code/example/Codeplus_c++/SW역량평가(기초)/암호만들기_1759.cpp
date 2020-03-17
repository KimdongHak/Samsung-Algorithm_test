// 암호만들기_1759.cpp
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int l, c;

void answer(int idx, vector<char>& buf, int cnt, int mo, int ja, string ans) {
	if (cnt == l) {
		if (mo >= 1 && ja >= 2)
			cout << ans << '\n';
		return;
	}
	if (idx == c)
		return;
	if (buf[idx] == 'a' || buf[idx] == 'e' || buf[idx] == 'i' || buf[idx] == 'o' || buf[idx] == 'u')
		answer(idx + 1, buf, cnt + 1, mo + 1, ja, ans + buf[idx]);
	else
		answer(idx + 1, buf, cnt + 1, mo, ja + 1, ans + buf[idx]);
	answer(idx + 1, buf, cnt, mo, ja, ans);
}

int main() {
	cin >> l >> c;
	vector <char> buf(c);
	for (int i = 0; i < c; i++)
		cin >> buf[i];

	sort(buf.begin(), buf.end());
	answer(0, buf, 0, 0, 0, "");
	return 0;
}
