#include<iostream>
#include<string>
using namespace std;

char board[8][8] = { 0, };
int main() {
	// 10번의 테스트케이스
//	for (int i = 0; i < 10; i++) {
		int sen_len = 0; //찾아야하는 회문의 길이
		cin >> sen_len;
		string buf = "";
		int count = 0, answer = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> board[i][j];
			}
		}
		// 가로
		for (int i = 0; i < 8; i++) {
			buf = "";
			for (int j = 0; j < 8; j++) {
				buf += board[i][j];
			}
			// 회문 가로 검사
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

		//세로
		for (int i = 0; i < 8; i++) {
			buf = "";
			for (int j = 0; j < 8; j++) {
				buf += board[j][i];
			}
			//회문 세로 검사
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