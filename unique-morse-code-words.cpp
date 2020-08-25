//https://leetcode.com/problems/unique-morse-code-words
class Solution {
public:
    string toMorse(string s){
        string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string toReturn{};
        for(int i=0;i<s.size();i++){
            toReturn += arr[s[i]-'a'];
        }
        return toReturn;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> codes;
        for(const string s:words){
            codes.insert(toMorse(s));
        }
        return codes.size();
    }
};