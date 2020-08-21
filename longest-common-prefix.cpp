//https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        int n=strs[0].size();
        string s{};
        bool flag = false;
        for(int i=0;i<n;i++){
            char temp = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i>strs[j].size()){
                    flag = true;
                    break;
                }
                if(strs[j][i]!=temp){
                    flag = true;
                    break;
                }
            }
            if(flag){
                return s;
            }
            else{
                s.push_back(temp);
            }
        }
        return s;
    }
};