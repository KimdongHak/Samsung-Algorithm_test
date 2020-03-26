#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector <int> v(n);
	// 노드 입력
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	// 질문
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
	}

	
	return 0;
}
