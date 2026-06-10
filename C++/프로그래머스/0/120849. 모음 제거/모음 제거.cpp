#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    my_string.erase(
        remove_if(my_string.begin(), my_string.end(),
          [](char c) {return string("aeiou").find(c) != string::npos;})
        , my_string.end());
    return my_string;
}