#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter;

	for (iter = v.begin(); iter != v.end(); ++iter) {
		//cout << *iter << endl;
		if (iter = find(v.begin(), v.end(), 20))
			cout << *iter << endl;
	}

	return 0;
}