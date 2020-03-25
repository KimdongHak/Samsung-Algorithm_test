#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    //2차원 배열 생성
    int** cost = new int* [n];
    for (int i = 0; i < n; ++i) {
        cost[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        d[i] = i;
    }

    int ans = 2147483647;

    do {
        bool ok = true;
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            if (cost[d[i]][d[i + 1]] == 0) {
                ok = false;
            }
            else {
                sum += cost[d[i]][d[i + 1]];
            }
        }
        if (ok && cost[d[n - 1]][d[0]] != 0) {
            sum += cost[d[n - 1]][d[0]];
            if (ans > sum) ans = sum;
        }
    } while (next_permutation(d.begin(), d.end()));
    cout << ans;
    return 0;
}