#include<iostream>
#include<string>
using namespace std;

char board[8][8] = { 0, };
int main() {
	// 10���� �׽�Ʈ���̽�
//	for (int i = 0; i < 10; i++) {
	int sen_len = 0; //ã�ƾ��ϴ� ȸ���� ����
	cin >> sen_len;
	string buf = "";
	int count = 0, answer = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> board[i][j];
		}
	}
	// ����
	for (int i = 0; i < 8; i++) {
		buf = "";
		for (int j = 0; j < 8; j++) {
			buf += board[i][j];
		}
		// ȸ�� ���� �˻�
		for (int a = 0; a < 8 - sen_len; a++) {
			for (int b = 0; b < sen_len; b++) {
				if (buf[b] == buf[sen_len - b]) {
					count++;
					if (count == sen_len / 2) {
						answer += 1;
						count = 0;
						break;
					}
				}
			}
		}
	}

	//����
	for (int i = 0; i < 8; i++) {
		buf = "";
		for (int j = 0; j < 8; j++) {
			buf += board[j][i];
		}
		//ȸ�� ���� �˻�
		for (int a = 0; a < 8 - sen_len; a++) {
			for (int b = 0; b < sen_len; b++) {
				if (buf[b] == buf[sen_len - b]) {
					count++;
					if (count == sen_len / 2) {
						answer += 1;
						count = 0;
						break;
					}
				}
			}
		}
	}
	cout << answer << endl;
	//	}
}