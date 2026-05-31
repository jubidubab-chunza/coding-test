#include <string>
#include <vector>

using namespace std;

int getGCD(int a, int b) {
    int r = 0;
    
    while (b!=0) {
        r = a%b;
        a = b;
        b = r;
    }
    
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    // 통분
    int denom = denom1 * denom2;
    int numer = (numer1*denom2) + (numer2*denom1);
    
    // 최대공약수 - 유클리드 호제법
    int gcd = getGCD(numer, denom);
    
    return {numer/gcd, denom/gcd};
}