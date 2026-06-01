#include <string>
#include <vector>

using namespace std;
int solution(int price) {
    if (price >= 5e5) return (int)(price*0.80);
    if (price >= 3e5) return (int)(price*0.90);
    if (price >= 1e5) return (int)(price*0.95);
    return price;
}