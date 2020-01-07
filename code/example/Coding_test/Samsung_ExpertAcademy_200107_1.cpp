// Samsung SW Test 2020-01-07 No.1 �����̳� ����Ÿ��
/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int t = 0; //number of testcase
int n = 0, m = 0; // 0 < n < 101, 0 < m < 2001
int R_i[10] = { 0, }, W_i[10] = { 0, };
int result = 0;
int buff[10] = { 0, };
bool bR_i[10] = { true, };
int ibR_i[10] = { 0, };
vector<int> remain;
int x = 0;


int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		result = 0;
		cin >> n >> m;

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
		cout << buff[j] << endl;
	}
	return 0;
}