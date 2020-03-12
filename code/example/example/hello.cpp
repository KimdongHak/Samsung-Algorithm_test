#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int k;
    vector <int> casetotal;
    

    do {
        cin >> k;
        vector <int> s(k);
        vector <int> ind(k); //Vector of index value
        for (int i = 0; i < k; i++) {
            cin >> s[i];
            ind[i] = 1;
        }
        for (int i = 0; i < k - ind.size(); i++) {
            ind.push_back(0);
        }
        do {
            // 순열 조합
            for (int i = 0; i < k; i++) {
                if (ind[i] == 1) {
                    cout << s[i] << " ";
                }
            }
            cout << '\n';

        } while (next_permutation(s.begin(), s.end()));

    } while (k != 0);

    cout << "success output!" << '\n';
    return 0;
}