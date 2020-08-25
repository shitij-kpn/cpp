//https://leetcode.com/problems/sum-of-square-numbers
class Solution {
public:
    bool judgeSquareSum(int n) {
        if(n==0)
            return true;
        for(long i=1;i*i<=n;i++)
        {
            long a = n-i*i;
            long b = sqrt(a);
            if(b*b==a)
                return true;
        }
        return false;
    }
};