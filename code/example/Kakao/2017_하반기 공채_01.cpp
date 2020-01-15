#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string buf = "";
    int* binary = new int[n];
    int indx = 0, i = 0;
    while (true) {
        binary[indx] = arr1[i] % 2 + arr2[i] % 2;
        arr1[i] = arr1[i] / 2;
        arr2[i] = arr2[i] / 2;
        if (binary[indx] == 2 || binary[indx] == 1)
            buf = buf + "#";
        else {
            buf = buf + " ";
        }
        if (arr1[i] == 0) {
            answer.push_back(buf);
            buf = "";
            i += 1;
            indx = 0;
        }
        indx += 1;
    }
    return answer;
}
int main() {

    int n = 0;
    vector<int> arr1;
    vector<int> arr2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    cout << solution(n, arr1, arr2) << endl;
}