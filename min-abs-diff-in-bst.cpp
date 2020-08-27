//https://leetcode.com/problems/minimum-absolute-difference-in-bst

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
    void Inorder(TreeNode *root , vector<int> &arr){
        if(root==nullptr){
            return;
        }
        if(root->left){
            Inorder(root->left,arr);
        }
        arr.push_back(root->val);
        if(root->right){
            Inorder(root->right,arr);
        }
        
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        Inorder(root,arr);
        int mini = INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            mini = min(mini , abs(arr[i] - arr[i+1]));
        }
        return mini;
    }
};