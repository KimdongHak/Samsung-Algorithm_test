/* C++ 에서 2차원 동적배열 할당하기
new를 사용해서 처음에 이중 포인터 ** 를 사용하여 1차원 배열 행 선언을 해주고
그다음 반복문을 써서 열 생성
*/
#include<iostream>
#include<string.h>
using namespace std;
int row, height;
int main() {
	// Input
	cin >> row;
	cin >> height;

	int** paper = new int* [row];	//row 먼저 1차원 배열 생성
	for (int i = 0; i < height; ++i) {		//반복문 써서 2차원 배열 height 생성
		paper[i] = new int[height];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < height; j++) {
			paper[i][j] = 0;			// 배열 원소 0 으로 초기화
			cout << paper[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}