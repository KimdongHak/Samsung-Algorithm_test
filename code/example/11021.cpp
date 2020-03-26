#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector<int> result(t);
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		result[i] = a + b;
	}
	for (int i = 0; i < t; i++) {
		cout << "Case #" << i + 1 << ": " << result[i] << '\n';
	}
	return 0;
}