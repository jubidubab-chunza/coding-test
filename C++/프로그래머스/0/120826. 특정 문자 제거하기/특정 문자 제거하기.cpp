#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for (char l: my_string) {
        if (l != letter[0]) answer += l;
    }
    return answer;
}