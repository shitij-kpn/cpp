//https://leetcode.com/problems/climbing-stairs/submissions/

class Solution {
public:
    int a[10000] = {0};
    bool x[10000] = {false};
    int climbStairs(int n) {
        if(n<2) return 1;
        if(x[n]) return a[n];
        
        a[n] = climbStairs(n-1) + climbStairs(n-2);
        x[n] = true;
        
        return a[n];
    }
};