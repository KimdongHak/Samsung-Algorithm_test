#include <iostream>
#include<vector>
using namespace std;
int go(int sum, int goal) {
    if (sum > goal) {
        return 0;
    }
    if (sum == goal) {
        return 1;
    }
    int now = 0;
    for (int i = 1; i <= 3; i++) {
        now += go(sum + i, goal);
    }
    return now;
}
int main() {
    int t, i = 0;
    cin >> t;
    vector <int> result(t);
    while (t--) {
        int n;
        cin >> n;
        result[i] = go(0, n);
        i++;
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }
    return 0;
}