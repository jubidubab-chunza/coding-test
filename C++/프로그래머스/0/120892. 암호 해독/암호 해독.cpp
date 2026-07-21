#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    int curPos = 1;
    for (char c : cipher) {
        if (curPos % code == 0) {
            answer += c;
        }
        curPos++;
    }
    return answer;
}