#include <iostream>
using namespace std;

int main() {
    class Solution {
        public:
            int climbStairs(int n) {
                int count =0;
                if (n<0){
                    return 0;
                }
                if (n==0){
                    return 1;
                }
                else{
                n=climbStairs(n-1)+climbStairs(n-2);
                }
                return n;
            }
        };
return 0;
}