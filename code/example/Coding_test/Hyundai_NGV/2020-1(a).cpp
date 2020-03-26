#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int buf[100000];
int result = 0;
int main() {
	int n, k, cnt = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%1d", &buf[i]);
	}
	while (true) {
		if (cnt == n - k + 1) break;
		int cvt = 0;
		for (int i = cnt; i < k + cnt; i++) {
			cvt = cvt * 10 + buf[i];
		}
		result = max(result, cvt);
		cnt += 1;
	}
	printf("%d\n", result);
	return 0;
}
/*
---------------------a번 문제--------------------
가장 큰 수
길이가 N인 숫자로 이루어진 문자열이 있다. 이 중 연속하는 K 개의 숫자로 만들 수 있는 수
중에서, 가장 큰 수를 찾는 프로그램을 작성하시오. 예를 들어, 문자열이 “1414213”이고 K=3
이라고 하자. 이 문자열에서 연속한 세 개의 숫자로 만들 수 있는 수는 141, 414, 142, 421,
213이며, 421이 이 중 가장 크기 때문에 답은 421이다.
[입력]
입력으로는 첫 줄에 두 정수 N과 K가 주어지는데, N은 문자열의 길이로 1 이상 100,000 이
하이며, K는 문제에서 주어진 것처럼 연속한 숫자 몇 개를 가지고 수를 만들지를 나타내고, 1
이상 10 이하이다. 다음 줄에는 길이 N인 숫자로 이루어진 문자열이 주어진다.
[출력]
한 줄에 정수 하나를 출력한다. 이 수는 주어진 문자열의 연속한 K 개의 숫자로 만들 수 있는
수 중에서 가장 큰 수이다. 수 앞에 불필요한 0은 출력하면 안된다. 예를 들어, 답이 0054라
면, 54를 출력해야 한다.

[입출력 예1]
7 3
1414213

[출력 예1]
421

[입출력 예2]
8 3
00000013

[출력 예2]
13

*/
