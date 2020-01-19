//2차원 배열이 초기화가 안됨 왜그럴까

#include<iostream>
using namespace std;
int main() {
	int t, l, w;
	// 꽃의 수 n, 각 울타리 안에 들어가야하는 꽃의 수 k
	int n, k, x, y;

	//testcase
	cin >> t;
	for (int i = 0; i < t; i++) {

		//정원의 길이, 폭
		cin >> l >> w;

		int** garden = new int* [l];
		for (int i = 0; i < l; ++i)
			garden[i] = new int[w];

		cin >> n >> k;

		for (int i = 0; i < w; i++)
			for (int j = 0; j < l; j++)
				garden[i][j] = 0;

		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			garden[x - 1][y - 1] += 1;
		}
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < w; j++) {
				cout << garden[l][w] << endl;
			}
			cout << "행행행ㅎ앻ㅇ" << endl;
		}


	}
}