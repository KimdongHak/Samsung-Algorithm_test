// bfs, dfs practice

#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
vector <int> buf[1001];
bool check[1001];
void dfs(int node) {
	check[node] = true;
	cout << node << " ";
	for (int i = 0; i < buf[node].size(); i++) {
		int next = buf[node][i];
		if (check[next] == false)
			dfs(next);
	}
}
int main() {
	int vertex, edge, start;
	cin >> vertex >> edge >> start;
	for (int i = 0; i < edge; i++) {
		int a, b;
		cin >> a >> b;
		buf[a].push_back(b);
		buf[b].push_back(a);
	}
	for (int i = 0; i <= vertex; i++) {
		sort(buf[i].begin(), buf[i].end());
	}
	dfs(start);
	return 0;
}