//2부터 N까지의 모든 소수의 합을 구하시오.
//N의 7이라면 {2,3,5,7}=17을 출력하면 됨.
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long solution(int N) {
	long long answer = 0;
	int* arr;
	arr = (int*)malloc(sizeof(int) * N);

	for (int i = 2; i <= N; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 2; j <= N; j++) {
			if (arr[j] != i && arr[j] % i == 0) {
				arr[j] = 0;
			}
		}
	}

	for (int i = 2; i <= N; i++) {
		if (arr[i] != 0)
			answer += arr[i];
	}
	return answer;
}