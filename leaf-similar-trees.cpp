//https://leetcode.com/problems/leaf-similar-trees

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    int count=0;
    void countLeaf(TreeNode* root){
        if(!root->left && !root->right){
            v.push_back(root->val);
            count++;
        }
        if(root->left){
            countLeaf(root->left);
        }
        if(root->right){
            countLeaf(root->right);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2){
            return false;
        }
        else if(root1 == NULL || root2 == NULL){
            return false;
        }
        int countone=0,counttwo=0;
        countLeaf(root1);
        countone=count;
        count=0;
        countLeaf(root2);
        counttwo = count;
        if(countone != counttwo){
            return false;
        }
        vector<int> one(v.begin(), v.begin() + countone);
        vector<int> two(v.begin() + countone, v.end());
        for(int i=0;i<countone;i++){
            if(one[i] != two[i]){
                return false;
            }
        }
        return true;
    }
};