#include<iostream>
using namespace std;
int main() {
	int t;
	while (true) {
		std::cin >> t;
		std::cout << "입력:: " << t << std::endl;
		if (std::cin.fail())
		{
			std::cout << "제대로 다시 입력해주세요. " << std::endl;
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		if (t == 0)break;
	}
}

/*int main() {
	int t;
	while (std::cin >> t) {
		std::cout << "input:: " << t << std::endl;
		if (t == 0) break;
	}
}
int main() {
	string a;
//	std::cout << "hello\n";
	int t;
	while (true) {
		std::cin >> t;
		std::cout << "input :: " << t << std::endl;
		if (t == 0) break;
	}
}*/