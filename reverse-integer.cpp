//https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        long long num=0;
        int rem=0;
        bool neg = false;
        if(x == INT_MAX || x == INT_MIN){
            return 0;
        }
        if(x<0){
            neg = true;
            x *= -1;
        }
        
        while(x>0){
            rem = x%10;
            num = num*10 + rem;
            if(num > INT_MAX || num < INT_MIN){
                return 0;
            }
            x/=10;
        }
        num = neg ? num*-1 : num;
        
        return num;
    }
};