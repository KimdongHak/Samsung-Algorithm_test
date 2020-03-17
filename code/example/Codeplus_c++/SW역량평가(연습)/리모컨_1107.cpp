//¸®¸ğÄÁ_1107.cpp - success

#include<iostream>
using namespace std;
bool broke[10];
int possible(int c) {
	if (c == 0) {
		return broke[0] ? 0 : 1;
	}
	int len = 0;
	while (c > 0) {
		if (broke[c % 10]) return 0;
		len += 1;
		c /= 10;
	}

	return len;
}
int main() {
	int n, m, N;
	cin >> n >> m;
	int key;
	for (int i = 0; i < m; i++) {
		cin >> key;
		broke[key] = true;
	}
	int ans = abs(n - 100);
	for (int i = 0; i <= 1000000; i++) {
		int c = i;
		int len = possible(c);
		if (len > 0) {
			int press = abs(c - n);
			if (ans > len + press) {
				ans = len + press;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}