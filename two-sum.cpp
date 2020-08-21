class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int temp = 0;
        vector<int> v(2);
        for(int i=0;i<nums.size();i++){
            temp = target - nums[i];
            if(m.find(temp)!=m.end()){
                v[0] = m[temp];
                v[1] = i;
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};