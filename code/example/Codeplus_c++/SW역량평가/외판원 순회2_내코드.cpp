#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
int main() {
	int n;
	int tot_cost = 0, min_cost = 100000;
	cin >> n;
	vector <int> perm(n);
	for (int i = 0; i < n; i++) {
		perm[i] = i; // 0 1 2 3 
	}

	// 2-dim cost allocation
	int** cost = new int* [n];
	for (int i = 0; i < n; ++i) {
		cost[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> cost[i][j];
		}
	}
	do {
		for (int i = 0; i < n; i++) {
			tot_cost += cost[perm[i]][perm[(i + 1) % n]];
		}

		min_cost = min(min_cost, tot_cost);
		tot_cost = 0;
	} while (next_permutation(perm.begin(), perm.end()));
	if (min_cost == 0) {
		return 1;
	}
	else {
		cout << min_cost;
		return 0;
	}

}