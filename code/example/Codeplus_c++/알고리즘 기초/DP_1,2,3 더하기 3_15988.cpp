#include<iostream>
using namespace std;
long long d[1000001];
const long long mod = 1000000009LL;
int main() {
    d[0] = 1;
    for (int i = 1; i <= 1000000; i++) {
        if (i - 1 >= 0) {
            d[i] += d[i - 1];
        }
        if (i - 2 >= 0) {
            d[i] += d[i - 2];
        }
        if (i - 3 >= 0) {
            d[i] += d[i - 3]; 
        }
        d[i] %= mod;
    }
    int testcase = 0;
    int result = 0;
    cin >> testcase;
    int* R = new int[testcase];
    for (int i = 0; i < testcase; i++) {
        int n = 0; //n ют╥б
        cin >> n;
        R[i] = n;

    }
    for (int i = 0; i < testcase; i++)
        cout << d[R[i]] << endl;
}
