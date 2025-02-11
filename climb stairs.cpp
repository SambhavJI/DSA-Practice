#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n < 0) return 0;
        if (n == 0) return 1;
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

int main() {
    Solution obj1;
    int n = 3;
    cout << "Ways to climb " << n << " stairs: " << obj1.climbStairs(n) << endl;
    return 0;
}
