#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	int buf = 0, max_sum = 0;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	do {
		for (int i = 0; i < (n - 1); i++) {
			buf += abs(v[i] - v[i + 1]);
		}
		max_sum = max(max_sum, buf);
		buf = 0;

	} while (next_permutation(v.begin(), v.end()));
	cout << max_sum;
	return 0;
}