#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool a[2000][2000]; // 인접행렬
vector<int> g[2000]; // 인접리스트
vector<pair<int, int>> edges; // 간선리스트

int main() {

	//사람의 수 N, 관계 수 M
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int from, to;
		cin >> from >> to;
		edges.push_back({ from,to });
		edges.push_back({ to,from });
		a[from][to] = a[to][from] = true;
		g[from].push_back(to);
		g[to].push_back(from);
	}

	M *= 2;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			//A --> B
			int A = edges[i].first;
			int B = edges[i].second;
			// C--> D
			int C = edges[j].first;
			int D = edges[j].second;
			if (A == B || A == C || A == D || B == C || B == D || C == D) {
				continue;
			}
			//B-->C
			if (!a[B][C]) {
				continue;
			}
			//D-->E
			for (int E : g[D]) {
				if (A == E || B == E || C == E || D == E) {
					continue;
				}
				cout << 1 << endl;
				return 0;
			}
		}
	}
	cout << 0 << endl;
	return 0;
}