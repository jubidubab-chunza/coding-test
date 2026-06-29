#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int maxLen = 0;
    int sum = 0;
    
    for (int s:sides) {
        sum += s;
        if (maxLen < s) maxLen = s;
    }
    
    return sum-maxLen > maxLen ? 1 : 2;
}