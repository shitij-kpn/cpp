//https://leetcode.com/problems/coin-change


class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(10001,100000);
        dp[0] = 0;
        for(int i=1;i<=amount;i++){
            for(int j:coins){
                if(j>i){
                    continue;
                }
                dp[i] = min(dp[i] , dp[i-j]+1);                    
            }
        }
        return dp[amount]<100000 ? dp[amount] : -1;
    }
};