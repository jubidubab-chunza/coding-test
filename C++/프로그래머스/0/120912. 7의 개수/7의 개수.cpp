#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for (int n: array) {
        while (n>0) {
            answer += (n%10==7);
            n /= 10;
        }
    }
    return answer;
}