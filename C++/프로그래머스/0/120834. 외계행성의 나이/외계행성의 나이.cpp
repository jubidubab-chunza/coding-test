#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string stringAge = to_string(age);
    string answer = "";
    for (char c:stringAge) {
        answer += char('a'+ c - '0');
    }
    return answer;
}