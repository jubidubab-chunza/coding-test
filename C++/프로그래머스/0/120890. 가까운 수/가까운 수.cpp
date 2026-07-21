#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int diff = abs(answer-n);
    for (int x: array) {
        int curDiff = abs(x-n);
        if (curDiff < diff || (curDiff == diff && x < answer)) {
            diff = curDiff;
            answer = x;
        }
    }
    return answer;
}