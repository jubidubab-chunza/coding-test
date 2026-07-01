#include <string>
#include <sstream>

using namespace std;

int solution(string s) {
    stringstream ss(s);
    string token;

    int answer = 0;
    int prev = 0;

    while(ss >> token) {
        if (token == "Z") {
            answer -= prev;
        }
        else {
            prev = stoi(token);
            answer += prev;
        }
    }

    return answer;
}