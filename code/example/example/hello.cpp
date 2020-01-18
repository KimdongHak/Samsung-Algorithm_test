#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector <int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator normal_iter = v.begin() + 3;

	//v.begin()의 index = 0, +3이면 40을 가리킴
	
	vector<int>::reverse_iterator reverse_iter(normal_iter);

	// 맨 뒤 Null값 제외하고 그 앞을 가리키는 것을 기준으로 index 3이면 30

	cout << "normal_iter:: " << *normal_iter << endl;
	cout << "reverse_iter:: " << *reverse_iter << endl;
}
