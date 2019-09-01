/*
입력이 N이 주어지면
그에 따른 값 배열을 구하라 - Vector 사용 필수
그리고 N만큼 값의 개수를 만들어라.
그리고 배열안에 값의 합을 0이 되게 만들어라.

ex) N=4 면 output = [-3,-2,2,3]
 N=3이면 output = [-2,0,2]
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(int N){
	vector<int> result;
	int sum=0;
	int ran_num = 0;
	if (abs(N) % 2 == 0) {
		for (int i = 0; i < N; i++) {

			ran_num = rand() % N - N+1;
			result.push_back(ran_num);
			if (ran_num < 0) {
				result.push_back(abs(ran_num));
				cout << "abs even number" << abs(ran_num)<< endl;
			}
			else if (ran_num > 0) {
				result.push_back(ran_num - ran_num * 2);
				cout << "abs even number" << ran_num -ran_num*2<< endl;

			}
			cout << "even number" << ran_num << endl;
		}
	
	}
	else {
		cout << "odd number" << endl;
	}
	cout << N << endl;
	return result;
}

int main() {
	int N;
	cin >> N;
	solution(N);
	return 0;
}