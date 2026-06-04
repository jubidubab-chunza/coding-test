#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(string rsp) {
    unordered_map<char, char> reaction = {
        {'2','0'}, {'0','5'}, {'5','2'}
    };
    
    string answer = "";
    for (char c: rsp) {
        answer += reaction[c];
    }
    
    return answer;
}