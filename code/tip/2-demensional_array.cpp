/* C++ ���� 2���� �����迭 �Ҵ��ϱ�
new�� ����ؼ� ó���� ���� ������ ** �� ����Ͽ� 1���� �迭 �� ������ ���ְ�
�״��� �ݺ����� �Ἥ �� ����
*/
#include<iostream>
#include<string.h>
using namespace std;
int row, height;
int main() {
	// Input
	cin >> row;
	cin >> height;

	int** paper = new int* [row];	//row ���� 1���� �迭 ����
	for (int i = 0; i < height; ++i) {		//�ݺ��� �Ἥ 2���� �迭 height ����
		paper[i] = new int[height];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < height; j++) {
			paper[i][j] = 0;			// �迭 ���� 0 ���� �ʱ�ȭ
			cout << paper[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}