#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N = 0;
	int cnt = 0;
	cin >> N;
	vector <int> permut(N);

	for (int i = 0; i < N; i++) {
		cin >> permut[i];
	}
	do {
		cnt += 1;
		if (cnt == 2) {
			for (int i = 0; i < N; i++) {
				cout << permut[i] << " ";
			}
			cout << endl;
			break;

		}
	} while (next_permutation(permut.begin(), permut.end()));
	if (cnt == 1) {
		cout << "-1";
	}
	return 0;
}