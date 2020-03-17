//15650_N°úM(2).cpp - success
#include<iostream>
using namespace std;
bool check[10];
int num[10];
void solve(int idx, int start, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << num[i];
			if (i != (m - 1))
				cout << " ";
		}
		cout << '\n';
	}
	for (int i = start; i <= n; i++) {
		if (check[i]) continue;
		check[i] = true;
		num[idx] = i;
		solve(idx + 1, i + 1, n, m);
		check[i] = false;

	}
}
int main() {
	int N, M;
	cin >> N >> M;
	solve(0, 1, N, M);
	return 0;
}