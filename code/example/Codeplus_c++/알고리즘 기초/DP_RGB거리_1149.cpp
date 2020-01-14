#include<iostream>
#include<algorithm>
using namespace std;
int N[1001][3];
int d[1001][3];
int main() {
	ios_base::sync_with_stdio(false);
	int testcase;
	cin >> testcase;
	for (int i = 1; i <= testcase; i++)
		for (int color = 0; color < 3; color++)
			cin >> N[i][color];

	for (int i = 1; i <= testcase; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + N[i][0];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + N[i][1];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + N[i][2];
	}
	cout << min({ d[testcase][0],d[testcase][1],d[testcase][2] }) << endl;
	return 0;
}