#include<iostream>
#include<algorithm>
using namespace std;
int d[100001][3];
int main() {
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;
	d[0][0] = 1;
	for (int i = 1; i <= N; i++) {
		d[i][0] = d[i - 1][0] + d[i - 1][1] + d[i - 1][2]; // ��ġ X
		d[i][1] = d[i - 1][0] + d[i - 1][2]; // ���ʿ� ��ġ
		d[i][2] = d[i - 1][0] + d[i - 1][1]; // �����ʿ� ��ġ
	}
	cout << (d[N][0] + d[N][1] + d[N][2]) % 9901 << endl;
	return 0;
}