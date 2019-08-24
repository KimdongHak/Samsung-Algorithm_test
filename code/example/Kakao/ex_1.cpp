#include<iostream>
using namespace std;
int solution(int n)
{
	int sum = 0, answer = 0;
	int quot = n, remain;
	while (quot != 0) {
		remain = quot % 10;
		quot = quot / 10;
		sum += remain;
	}
	std::cout << sum << endl;
	return sum;
}
int main() {
	int n;
	std::cin >> n;
	solution(n);
}