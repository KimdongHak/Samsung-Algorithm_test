#include<iostream>
using namespace std;
int main() {
	int testcase;
	char seat[10][10];
	int a, b;
	int i = 0, j = 0;
	int total[30];
	int seatcnt = 0;
	std::cin >> testcase;
	for (i = 0; i <= testcase; i++) {
		std::cin >> a; // row
		std::cin >> b; // column
		for (i = 0; i < a; i++) {
			for (j = 0; j < b; j++) {
				std::cin >> seat[i][j];
			}
		}
		std::cout << "\n[ available seat ]\n";
		for (i = 0; i < a; i++) {
			for (j = 0; j < b; j++) {
				std::cout << seat[i][j];
				std::cout << " ";
				// available seat count
				// (i-1, j+1) (i-1, j-1) (i,j+1), (i,j-1)
				if ((i - 1) != -1 || (i + 1) != a || (j - 1) == -1 || (j + 1) == b) {
					if (seat[i - 1][j + 1] == 'x' || seat[i - 1][j - 1] == 'x' || seat[i][j + 1] == 'x' || seat[i][j - 1] == 'x') {

					}
					else {
						seatcnt++;
					}
				}
			}
			std::cout << "\n";
		}
		a = 0;
		b = 0;
		std::cout << "\n available seats ::  " << seatcnt;
		std::cout << "\n";
	}
}

