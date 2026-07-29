#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    for (char& c : my_string) {
        if (c <= 'Z') {
            c += 'a' - 'A';
        }
    }
    sort(my_string.begin(), my_string.end());
    return my_string;
}