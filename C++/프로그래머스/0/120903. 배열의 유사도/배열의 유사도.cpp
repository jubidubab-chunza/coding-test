#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    unordered_map<string, int> mp;
    
    for (const string& s: s1) {
        mp[s]++;
    }
    
    int answer = 0;
    for (const string& s: s2) {
        if (mp.count(s)) {
            answer++;
        }
    }
    
    return answer;
}