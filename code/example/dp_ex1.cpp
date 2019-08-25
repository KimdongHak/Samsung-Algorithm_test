#include<iostream>
using namespace std;
int cache[30][30] = { -1, };
int solution(int n, int r)
{
	if (r == 0 | n == r) return 1;
	if (cache[n][r] != -1)
		return cache[n][r];
	return cache[n][r] = solution(n - 1, r - 1) + solution(n - 1, r);
}
int main() {
	int n, r;
	std::cin >> n;
	std::cin >> r;
	solution(n, r);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < r; j++) {
			cout << cache[i][j];
		}
	}
}