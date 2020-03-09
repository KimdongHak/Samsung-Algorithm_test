// 카카오 코드 페스티벌 예선 - 상금헌터_15953.cpp
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main() {
	int t, buf1, buf2, m1=0, m2=0;
	cin >> t;

	vector <pair <int, int>> grade;

	vector <int> tot_money(t);

	for (int i = 0; i < t; i++) {
		cin >> buf1 >> buf2;
		grade.push_back({ buf1, buf2 });
	}
	int i = 0;
	vector<pair<int, int>>::iterator it;
	for (it = grade.begin(); it !=grade.end(); it++) {

		// 1회 대회
		if (it->first == 1) { m1 = 500; }
		else if (it->first >= 2 && it->first < 4) { m1 = 300; }
		else if (it->first >= 4 && it->first < 7) { m1 = 200; }
		else if (it->first >= 7 && it->first < 11) { m1 = 50; }
		else if (it->first >= 11 && it->first < 16) { m1 = 30; }
		else if (it->first >= 16 && it->first < 22) { m1 = 10; }
		else { m1 = 0; }

		// 2회 대회
		if (it->second == 1) { m2 = 512; }
		else if (it->second >= 2 && it->second < 4) { m2 = 256; }
		else if (it->second >= 4 && it->second < 8) { m2 = 128; }
		else if (it->second >= 8 && it->second < 16) { m2 = 64;	}
		else if (it->second >= 16 && it->second < 32) { m2 = 32; }
		else { m2 = 0; }

		tot_money[i] = (m1 + m2) * 10000;
		i++;
	}
	for (int i = 0; i < t; i++) {
		cout << tot_money[i] << '\n';
	}
	return 0;
}