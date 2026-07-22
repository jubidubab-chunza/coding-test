#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string word = "";
    unordered_map<string, int> mp = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };
    
    for (char n: numbers) {
        word += n;
        if (mp.count(word)==1) {
            answer = answer * 10 + mp[word];
            word.clear();
        }
    }
    return answer;
}