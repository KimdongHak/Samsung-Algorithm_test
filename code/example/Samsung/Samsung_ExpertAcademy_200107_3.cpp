//2���� �迭�� �ʱ�ȭ�� �ȵ� �ֱ׷���

#include<iostream>
using namespace std;
int main() {
	int t, l, w;
	// ���� �� n, �� ��Ÿ�� �ȿ� �����ϴ� ���� �� k
	int n, k, x, y;

	//testcase
	cin >> t;
	for (int i = 0; i < t; i++) {

		//������ ����, ��
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
			cout << "�����ा�" << endl;
		}


	}
}