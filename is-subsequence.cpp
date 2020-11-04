//https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        while(i<t.size()){
            if(s[0] == t[i]){
                i++;
                s.erase(s.begin());
            }
            else{
                i++;
            }
        }
        return !s.size();
    }
};