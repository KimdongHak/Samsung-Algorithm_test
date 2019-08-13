// wrong answer
#include<iostream>
using namespace std;
int main() {
	int a, b;
	double total;
	std::cin >> a;
	std::cin >> b;
	total = (double)a / (double)b;
	cout.precision(9);
	std::cout << total << std::endl;
}