//11726.cpp
#include<cstdio>
#pragma warning(disable:4996)
using namespace std;
int d[10001];
int main() {
	d[0] = 1;
	d[1] = 1;
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 10007;
	}
	printf("%d\n", d[n]);
	return 0;
}