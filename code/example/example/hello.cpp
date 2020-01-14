#include<iostream>
using namespace std;
string d[36][36][36];

void ans(int num) {
	d[1][0][0] = "*";
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << d[i][j] << endl;
		}

	}
}
int main() {
	int testcase,N, posX=1, posY, posZ=1;
	cin >> testcase;
	d[0][0][0] = "*";
	for (int i = 1; i <= testcase; i++) {
		cin >> N;
		// n % 3 = 1 이면 아래에 복붙
		if (N % 3 == 1) {
			for (int x = 1; x < 36; x++) {
				for (int y= 1; y < 36; y++) {
					d[x][y][posZ] = d[x][y][posZ - 1];
					d[x*2][y*2][posZ] = d[x][y][posZ-1];
				}
			}
		}

		// n % 3 = 2 이면 오른쪽에 별 찍기
		else if (N % 3 == 2) {
			
		}

		// n % 3 = 0 이면 맨 아랫줄에 별 쫘르륵 찍기
		else if (N % 3 == 0) {

		}
	}


	for (int i = 1; i <= testcase; i++) {
		cout << "#" << i << endl;
		ans(i);
	}
	return 0;
}