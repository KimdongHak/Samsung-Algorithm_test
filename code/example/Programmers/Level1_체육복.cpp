#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> std(n);
    for (int i = 0; i < lost.size(); i++) {
        std[lost[i] - 1] += -1;
    }
    for (int i = 0; i < reserve.size(); i++) {
        std[reserve[i] - 1] += 1;
    }
    for (int i = 0; i < std.size(); i++) {
        if (std[i] == 1) {
            if (i - 1 > -1) {
                if (std[i - 1] == -1) {
                    std[i - 1] += 1;
                    std[i] += -1;
                }
            }
        }
        if (std[i] == 1) {
            if (i + 1 < std.size()) {
                if (std[i + 1] == -1) {
                    std[i + 1] += 1;
                    std[i] += -1;
                }
            }
        }
    }
    for (int i = 0; i < std.size(); i++) {
        if (std[i] == 0 || std[i] == 1)
            ++answer;
    }
    return answer;
}