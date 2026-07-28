#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long left = 0;
    long long right = n;
    long long mid = 0;
    
    while(true) {
        if (left > right) return 2;
        mid = (left+right)/2;
        if (mid*mid == n) return 1;
        if (mid*mid < n) left = mid+1;
        else if (mid*mid > n) right = mid-1;
    }
}