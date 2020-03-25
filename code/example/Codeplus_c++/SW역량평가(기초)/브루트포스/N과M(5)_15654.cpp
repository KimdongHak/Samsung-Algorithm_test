//N°úM(5)_15654.cpp - success
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool check[10];
int num[10];
void solve(int idx, vector <int>& buf, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << num[i];
			if (i != m - 1) cout << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		if (check[i]) continue;
		check[i] = true;
		num[idx] = buf[i];
		solve(idx + 1, buf, n, m);
		check[i] = false;
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	vector <int> buf(n);
	for (int i = 0; i < n; i++) {
		cin >> buf[i];
	}
	sort(buf.begin(), buf.end());
	solve(0, buf, n, m);
	return 0;
}