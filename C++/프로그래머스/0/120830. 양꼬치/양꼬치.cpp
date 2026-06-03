#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    return 12000*n + 2000*max(0, k-n/10);
}