//N°úM (8) _ 15657.cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool check[10];
int num[10];
void solve(vector <int>& buf, int idx, int selected, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << num[i];
			if (i != (m - 1)) cout << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = selected; i < n; i++) {
		//if (check[i]) continue;
		check[i] = true;
		num[idx] = buf[i];
		solve(buf, idx + 1, i, n, m);
		check[i] = false;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	vector <int> buf(n);
	for (int i = 0; i < n; i++)
		cin >> buf[i];
	sort(buf.begin(), buf.end());
	solve(buf, 0, 0, n, m);
	return 0;
}