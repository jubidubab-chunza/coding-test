#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> freq(26);
    for (char c : s) {
        freq[c-'a']++;   
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 1) {
            answer += i+'a';
        }
    }
    return answer;
}