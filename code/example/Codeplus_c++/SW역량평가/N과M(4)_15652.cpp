//15652_N°úM(4).cpp
#include<iostream>
using namespace std;
bool check[10];
int num[10];
void solve(int idx, int start, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++)
		{
			cout << num[i];
			if (i != m - 1)  cout << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = start; i <= n; i++) {
		check[i] = true;
		num[idx] = i;
		solve(idx + 1, i, n, m);
		check[i] = false;
	}

}
int main() {
	int N, M;
	cin >> N >> M;
	solve(0, 1, N, M);
	return 0;
}