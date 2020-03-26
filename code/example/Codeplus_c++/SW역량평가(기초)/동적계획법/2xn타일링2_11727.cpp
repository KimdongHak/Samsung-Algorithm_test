#include<cstdio>
#pragma warning(disable:4996)
int d[10001];
int main() {
	int n;
	d[0] = 1;
	d[1] = 1;
	scanf("%d", &n);
	for (int i = 2; i < n; i++) {
		d[i] = d[i - 1] + d[i - 2]*2;
		d[i] %= 10007;
	}
	printf("%d", d[n]);
	return 0;
}