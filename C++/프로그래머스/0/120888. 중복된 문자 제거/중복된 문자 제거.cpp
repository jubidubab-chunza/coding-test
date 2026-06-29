#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
    unordered_set<char> visited;
    string answer = "";
    for (char c : my_string) {
        if (visited.insert(c).second) {
            answer += c;
        }
    }
    return answer;
}