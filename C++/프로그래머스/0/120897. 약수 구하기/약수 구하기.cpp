#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> left;
    vector<int> right;
    for (int i=1; i*i<=n; i++) {
        if (n%i==0) {
            left.push_back(i);
            if (i*i == n) continue;
            right.push_back(n/i);
        }
    }
    reverse(right.begin(), right.end());
    left.insert(left.end(), right.begin(), right.end());
    return left;
}