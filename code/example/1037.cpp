#include<iostream>
using namespace std;
void main()
{
	int N=1, n;
	int a[]; // N�� ��¥ ���
	std::cin >> n; //N�� ����� ����
	for (int i = 0; i < n; i++) {
		std::cin >> a[i]; // N�� ��¥ ��� �Է�
		N = a[i]*N;
	}
	
	std::cout << N << endl;
}
