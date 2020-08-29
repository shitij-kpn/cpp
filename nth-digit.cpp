//https://leetcode.com/problems/nth-digit/

class Solution {
public:
    int findNthDigit(int n) {
        /*
            1-9 = 9
            10-99 = 90
            100-999 - 900
            1000-9999 - 9,000
            10000-99999 - 90,000
        */
        int base = 9;
        long digits = 1;
        while (n - base * digits > 0) {
            n -= base * digits;
            base *= 10;
            digits++;
        }
        int index = (n - 1) % digits;
        int offset = (n - 1) / digits;
        long start = pow(10, digits - 1);
        return to_string(start + offset)[index] - '0';
  
    }
};