#include<iostream>
#include<vector>
using namespace std;
int main() {
    int k;
    vector <int> casetotal;
    do {
        cin >> k;
        vector <int> s(k);
        for (int i = 0; i < k; i++) {
            cin >> s[i];
        }
        do {
            // 순열 조합
            for (int i = 0; i < k; i++) {
                cout << s[i] << " ";
            }
            cout << '\n';
        } while (next_permutation(s.begin(), s.end()));

    } while (k != 0);

    cout << "success output!" << '\n';
    return 0;
}