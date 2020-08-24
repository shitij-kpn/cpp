//brute force (TLE)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0,maxlen = INT_MIN;
        bool space = false;
        if(s.empty()){
            return 0;
        }
        for(int i=0;i<s.size();i++){
            map<char,int> m;
            len=0;
            space = false;
            for(int j=i;j<s.size();j++){
                if(isspace(s[j])){
                    if(space){
                        break;
                    }
                    space = true;
                    len++;   
                }
                else{
                    if(m[s[j]] > 0){
                        break;
                    }
                    len++;
                    m[s[j]]++;
                }
            }
            maxlen = max(maxlen,len);
        }
        return maxlen;
    }
};



//optimised version
