//https://leetcode.com/problems/combination-sum-iv

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        long dp[100001]={0};    //number of ways to get sum dp[i], i is the sum so far
        dp[0] = 1;
        for(int i=1;i<=target;i++){
            for(int j:nums){
                if(j > i){
                    continue;
                }
                dp[i] += dp[i-j]%1000000007;
            }
        }
        return dp[target];
    }
};