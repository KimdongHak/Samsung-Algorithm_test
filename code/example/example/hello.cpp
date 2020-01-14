// 1. 처음에 공간을 만든다
// 2. joisino가 숫자 하나를 방송한다. 만약 그 숫자가 종이위에 씌어진 숫자라면 종이에서 숫자를 지운다.
// 만약 아니라면, 종이위에 적는다. 이 과정은 N번 반복한다.
// 3. 그러고 나서, 질문을 물어본다. 현재 숫자가 얼마나 시트에 적혀져 있는가?
// 게임이 끝날때 까지 몇개의 숫자가 적혀져 있겠는가?
#include<iostream>
#include<vector>

#include<ctime>
using namespace std;
int ans[100001];
int main() {
	ios_base::sync_with_stdio(false);
	clock_t start = clock();
	int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		long long N, nnn;
		int cnt=0;
		cin >> N;
		vector<int> buf(N);
		for (int j = 0; j < N; j++) {
			cin >> nnn;
			for (int j = 0; j < buf.size(); j++) {
				if (buf[j] == nnn) {
					buf.erase(buf.begin() + j);
					cnt -= 1;
					break;
				}
				if (j == buf.size() - 1) {
					buf.push_back(nnn);
					cnt++;
					break;
				}
			}
		}
		ans[i] = cnt;
	}
	for(int i=1;i<=testcase;i++)
		cout << "#" << i << " " << ans[i-1] << endl;

	cout << "걸린시간 :: "<< (float)(clock() - start) / CLOCKS_PER_SEC << endl;
	return 0;
}