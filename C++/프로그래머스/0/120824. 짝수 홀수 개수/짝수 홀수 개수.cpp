#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int oddCnt = 0;
    int evenCnt = 0;
    for (int n: num_list) {
        if (n&1) oddCnt++;
        else evenCnt++;
    }
    return {evenCnt, oddCnt};
}