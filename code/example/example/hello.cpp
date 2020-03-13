//연산자끼워넣기_14888.cpp

#include<iostream>
#include<vector>
using namespace std;
int ansmax = 0, ansmin = 100000;

int solve(int cnt, vector <int>& A, int plus, int minus, int mult, int div) {


	return ansmax, ansmin;
}
int main() {
	
	// 수의 개수 n
	int n, result=0;
	cin >> n;
	vector <int> A(n);
	vector <int> arith(4);

	//숫자 입력
	for (int i = 0; i < n; i++)
		cin >> A[i];
	//부호 입력
	for (int i = 0; i < 4; i++)
		cin >> arith[i];

	solve(n, A, arith[0], arith[1], arith[2], arith[3]);

	cout << ansmax << '\n';
	cout << ansmin << '\n';
	return 0;
}