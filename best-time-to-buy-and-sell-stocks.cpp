//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MIN,maxcur = 0;
        int n = prices.size();
        if(n == 0 || n == 1){
            return 0;
        }
        for(int i=1;i<n;i++){
            maxcur += prices[i] - prices[i-1];
            maxcur = max(0,maxcur);
            maxi = max(maxcur , maxi);            
        }
        return maxi;
    }
};