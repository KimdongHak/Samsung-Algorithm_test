#include<iostream>
using namespace std;
int main()
{
	int N = 1, n;
	int a[50]; // N의 진짜 약수
	std::cin >> n; //N의 약수의 개수
	for (int i = 0; i < n; i++) {
		std::cin >> a[i]; // N의 진짜 약수 입력
		N = a[i] * N;
	}

	std::cout << N << endl;
}
