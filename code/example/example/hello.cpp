//6064_카잉달력.cpp
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector <int> m(t);
	vector <int> n(t);
	vector <int> x(t);
	vector <int> y(t);
	vector <int> k(t);

	for (int i = 0; i < t; i++) {
		cin >> m[i] >> n[i] >> x[i] >> y[i];
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j <= 40000; j++) {
			if ((j - x[i]) % m[i] == 0 && (j - y[i]) % n[i] == 0) {
				k[i] = j;
				break;
			}
			if (j == 40000) {
				k[i] = -1;
				break;
			}
		}
	}

	for (int i = 0; i < t; i++)
		cout << k[i] << '\n';

	return 0;
}