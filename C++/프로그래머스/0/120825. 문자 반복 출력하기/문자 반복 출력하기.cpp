#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (char s: my_string) {
        answer += string(n, s);
    }
    return answer;
}