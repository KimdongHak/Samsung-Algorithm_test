// Á÷Á¢ Ç¬ ¹®Á¦ - success
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<queue>
#include<cstdio>
using namespace std;
int map[1001][1001];
int check[1001][1001];
int cnt = 1;
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int n, m;
void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	check[x][y] = 1;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (map[nx][ny] == 1 && check[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					check[nx][ny] = check[x][y] + 1;
				}
			}
		}
	}
}


int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
			check[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 1 && check[i][j] == 0)
				bfs(i, j);
		}
	}
	printf("%d\n", check[n - 1][m - 1]);
	return 0;
}