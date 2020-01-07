// Samsung SW Test 2020-01-07 No.1 진용이네 주차타워
/*
	   아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
	   앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
	   //여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
	   freopen 함수를 이용하면 이후 cin 을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
	   따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
	   freopen 함수를 사용하기 위해서는 #include <cstdio>, 혹은 #include <stdio.h> 가 필요합니다.
	   단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
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

		// R_i는 단위 무게당 요금, n개의 차량공간
		for (int i = 0; i < n; i++) {

			cin >> R_i[i];
			bR_i[i] = false;
		}
		// W_i 차량의 무게 
		for (int i = 0; i < m; i++) {
			cin >> W_i[i];
		}

		for (int i = 0; i < (2 * m); i++) {

			cin >> x;
			//차가 들어올 때
			if (x > 0) {
				// 아직 주차못한 차량이 없는 경우
				if (remain.size() == 0) {
					for (int i = 0; i < n; i++) {
						if (bR_i[i] == false) {
							bR_i[i] = true;
							ibR_i[i] = x;
							result += (R_i[i] * W_i[x - 1]);
							break;
						}
						else {
							// 주차공간이 만차일 경우
							if (i == (n - 1)) {
								remain.push_back(x);
							}
						}
					}
				}
				// 주차 못한 차량이 있는 경우
				else {
					remain.push_back(x);
				}
			}

			//차가 나갈 때
			if (x < 0) {
				// 절대값 변형
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