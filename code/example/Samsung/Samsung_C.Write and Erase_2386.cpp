// 1. ó���� ������ �����
// 2. joisino�� ���� �ϳ��� ����Ѵ�. ���� �� ���ڰ� �������� ������ ���ڶ�� ���̿��� ���ڸ� �����.
// ���� �ƴ϶��, �������� ���´�. �� ������ N�� �ݺ��Ѵ�.
// 3. �׷��� ����, ������ �����. ���� ���ڰ� �󸶳� ��Ʈ�� ������ �ִ°�?
// ������ ������ ���� ��� ���ڰ� ������ �ְڴ°�?
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
		int cnt = 0;
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
	for (int i = 1; i <= testcase; i++)
		cout << "#" << i << " " << ans[i - 1] << endl;

	cout << "�ɸ��ð� :: " << (float)(clock() - start) / CLOCKS_PER_SEC << endl;
	return 0;
}