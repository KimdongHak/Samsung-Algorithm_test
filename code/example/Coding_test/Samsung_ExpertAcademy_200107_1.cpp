#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main() {

	int t = 0, n = 0, m = 0, result = 0, x = 0;
	vector<int> remain;

	cin >> t;

	int* buff = new int[t];

	for (int i = 0; i < t; i++) {
		result = 0;
		cin >> n >> m;
		int* R_i = new int[n];
		int* ibR_i = new int[n];
		bool* bR_i = new bool[n];

		int* W_i = new int[m];
		// R_i�� ���� ���Դ� ���, n���� ��������
		for (int i = 0; i < n; i++) {
			cin >> R_i[i];
			bR_i[i] = false;
		}
		// W_i ������ ���� 
		for (int i = 0; i < m; i++) {
			cin >> W_i[i];
		}

		for (int i = 0; i < (2 * m); i++) {
			cin >> x;
			//���� ���� ��
			if (x > 0) {
				// ���� �������� ������ ���� ���
				if (remain.size() == 0) {
					for (int i = 0; i < n; i++) {
						if (bR_i[i] == false) {
							bR_i[i] = true;
							ibR_i[i] = x;
							result += (R_i[i] * W_i[x - 1]);
							break;
						}
						else {
							// ���������� ������ ���
							if (i == (n - 1)) {
								remain.push_back(x);
							}
						}
					}
				}
				// ���� ���� ������ �ִ� ���
				else {
					remain.push_back(x);
				}
			}
			//���� ���� ��
			if (x < 0) {
				// ���밪 ����
				x = abs(x);
				if (remain.size() == 0) {
					for (int i = 0; i < n; i++) {
						if (ibR_i[i] == x) {
							bR_i[i] = false;
							ibR_i[i] = 0;
							break;
						}
					}
				}
				else {
					for (int i = 0; i < n; i++) {
						if (ibR_i[i] == x) {
							ibR_i[i] = remain.front();
							result += (R_i[i] * W_i[remain.front() - 1]);
							remain.erase(remain.begin());
							break;
						}
					}
				}

			}
		}
		buff[i] = result;
	}
	for (int j = 0; j < t; j++) {
		cout << "#" << (j + 1) << " " << buff[j] << endl;
	}
	return 0;
}