#include <string>
#include <sstream>

using namespace std;

int solution(string my_string) {
    stringstream ss(my_string);

    int answer, num;
    char op;
    
    ss >> answer;
    
    while (ss >> op >> num) {
        if (op == '+') answer += num;
        else if (op == '-') answer -= num;
    }
    
    return answer;
}