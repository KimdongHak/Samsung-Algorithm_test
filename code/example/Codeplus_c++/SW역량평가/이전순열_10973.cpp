#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	do {
		cnt += 1;
		if (cnt == 2) {
			for (int i = 0; i < n; i++) {
				cout << v[i] << " ";
			}
			cout << endl;
			break;
		}
	} while (prev_permutation(v.begin(), v.end()));
	if (cnt == 1) {
		cout << "-1";
	}
	return 0;
}