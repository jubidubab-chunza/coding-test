#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int minX = dots[0][0], maxX = dots[0][0];
    int minY = dots[0][1], maxY = dots[0][1];
    
    for (vector<int>& dot: dots) {
        minX = min(minX, dot[0]);
        maxX = max(maxX, dot[0]);
        minY = min(minY, dot[1]);
        maxY = max(maxY, dot[1]);
    }
    
    return (maxX-minX)*(maxY-minY);
}