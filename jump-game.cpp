//https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        for(int total=0;i< nums.size() && total >= i;i++){
            total = max(total, i + nums[i]);
        }
        return i == nums.size();
    }
};