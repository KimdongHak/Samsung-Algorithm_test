/* C++ ���� 2���� �����迭 �Ҵ��ϱ�
new�� ����ؼ� ó���� ���� ������ ** �� ����Ͽ� 1���� �迭 �� ������ ���ְ�
�״��� �ݺ����� �Ἥ �� ����
*/
#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;
int row, height;
int pic_count = 0, pic_area = 0;
int pic_connect = 0;
int max_area = 0;
int create_paper(int n, int m) {
	int** paper = new int* [n];	//row ���� 1���� �迭 ����
	for (int i = 0; i < m; ++i) {		//�ݺ��� �Ἥ 2���� �迭 height ����
		paper[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> paper[i][j];
		}
	}
	// ��� ���
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//���Ұ� 0 �� �ƴѰ��
			if (paper[i][j] == 1) {
				pic_area++;
				cout << "2�� �ٲߴϴ� " << pic_area << endl;
				paper[i][j] = 2; // ǥ��
				if ((i + 1) != n && (j + 1) != m) {

					if (paper[i + 1][j] == 0 && paper[i][j + 1] == 0) { // �Ʒ� ������ �Ѵ� 0 �ϰ�� pic_count�� ����
						pic_count++;	// �׸� ���� ����
						max_area = max(max_area, pic_area);
						cout << "�翷�� �����ϴ�." << pic_area << endl;
						pic_area = 0;
					}
					else if (paper[i + 1][j] == 1) { // �Ʒ��� 1�� ���� ���
						paper[i + 1][j] = 2;
						pic_area++;		//�׸� ���� ����
						cout << "�Ʒ��� 2�� �ٲߴϴ�." << pic_area << endl;
					}
					else if (paper[i][j + 1] == 1) {
						paper[i][j + 1] = 2;
						pic_area++;
						cout << "�������� 2�� �ٲߴϴ�" << pic_area << endl;
					}
					else {
					}

				}
				else if ((i + 1) == n) { // �Ʒ��� �� ���� ��

				}
				else if ((j + 1) == m) { // �������� �� ���϶�

				}
				else {
					pic_area = 1;
				}
			}
			else {}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << paper[i][j] << " ";
		}
		cout << endl;
	}
	//���
	cout << pic_count << endl;
	cout << max_area << endl;

	return max_area, pic_count;
}
int main() {

	cin >> row;
	cin >> height;
	create_paper(row, height);
	return 0;
}