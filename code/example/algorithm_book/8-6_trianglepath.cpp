#include<iostream>
#include<string.h>
using namespace std;
int case[5][5] = {
	6,-1,-1,-1,-1,
	1,2,-1,-1,-1,
	3,7,4,-1,-1,
	9,4,1,7,-1,
	2,7,5,9,4
};
int n, triangle[100][100];
int cache2[100][100];
int path1(int y, int x) {
	if (y == n - 1) return triangle[y][x];
	int& ret = cache2[y][x];
	if (ret != -1) return ret;
	return ret = max(path1(y + 1, x), path1(y + 1, x + 1)) + triangle[y][x];
}
