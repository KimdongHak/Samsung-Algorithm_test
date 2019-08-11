#include<iostream>
using namespace std;
int main() {
	int a,b,total;
	std::cout << "Please input data :: ";
	std::cin >> a;
	std::cout << "Please input second data :: ";
	std::cin >> b;
	total = a + b;
	std::cout << "This is sum data :: " << a << " + " << b << " = " <<total << std::endl;
}