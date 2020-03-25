//15649_N°úM(1).cpp
#include<iostream>
using namespace std;
bool check[10];
int a[10];
void solve(int idx, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i];
			if (i != m - 1) cout << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (check[i]) continue;
		check[i] = true;
		a[idx] = i;
		solve(idx + 1, n, m);
		check[i] = false;
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	solve(0, N, M);
	return 0;
}