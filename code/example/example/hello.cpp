#include<iostream>
using namespace std;
int main() {
<<<<<<< HEAD
	int testcase;
	int a[30][30];
	int i = 0, j = 0;
	int total[30];
	std::cin >> testcase;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < testcase; j++) {
			std::cin >> a[i][j];
		}
	}
	for (i = 0; i < testcase; i++) {
		for (j = 0; j < testcase; j++) {
			if (a[i][j] == NULL) {
				total[i] == 0;
			}
			else {
				total[i] = a[i][j];
				std::cout << total[i] << std::endl;
			}
		}
	}
=======
	int a, b;
	double total;
	std::cin >> a;
	std::cin >> b;
	total = (double)a / (double)b;
	cout.precision(9);
	std::cout << total << std::endl;
>>>>>>> a75c8c541132ad9e744ce7a3e4c2968d32d0f705
}