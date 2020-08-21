//https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long num=0,origx = x;
        int rem=0;
        while(x>0){
            rem = x%10;
            num = num*10 + rem;
            x/=10;
        }
        return origx == num;
    }
};