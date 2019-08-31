/* C++ 에서 2차원 동적배열 할당하기
new를 사용해서 처음에 이중 포인터 ** 를 사용하여 1차원 배열 행 선언을 해주고
그다음 반복문을 써서 열 생성
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
	int** paper = new int* [n];	//row 먼저 1차원 배열 생성
	for (int i = 0; i < m; ++i) {		//반복문 써서 2차원 배열 height 생성
		paper[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> paper[i][j];
		}
	}
	// 결과 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//원소가 0 이 아닌경우
			if (paper[i][j] == 1) {
				pic_area++;
				cout << "2로 바꿉니다 " << pic_area << endl;
				paper[i][j] = 2; // 표시
				if ((i + 1) != n && (j + 1) != m) {

					if (paper[i + 1][j] == 0 && paper[i][j + 1] == 0) { // 아래 오른쪽 둘다 0 일경우 pic_count만 증가
						pic_count++;	// 그림 개수 증가
						max_area = max(max_area, pic_area);
						cout << "양옆에 없습니다." << pic_area << endl;
						pic_area = 0;
					}
					else if (paper[i + 1][j] == 1) { // 아래에 1이 있을 경우
						paper[i + 1][j] = 2;
						pic_area++;		//그림 넓이 증가
						cout << "아래를 2로 바꿉니다." << pic_area << endl;
					}
					else if (paper[i][j + 1] == 1) {
						paper[i][j + 1] = 2;
						pic_area++;
						cout << "오른쪽을 2로 바꿉니다" << pic_area << endl;
					}
					else {
					}

				}
				else if ((i + 1) == n) { // 아래가 끝 줄일 때

				}
				else if ((j + 1) == m) { // 오른쪽이 끝 열일때

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
	//출력
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