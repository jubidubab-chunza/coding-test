#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    int X, Y, Z;
    char op, eq;
    
    vector<string> answer;
    for (const string& q: quiz) {
        stringstream ss(q);
        ss >> X >> op >> Y >> eq >> Z;
        if (op == '+' && X+Y==Z) answer.push_back("O");
        if (op == '+' && X+Y!=Z) answer.push_back("X");
        if (op == '-' && X-Y==Z) answer.push_back("O");
        if (op == '-' && X-Y!=Z) answer.push_back("X");
    }
    
    return answer;
}