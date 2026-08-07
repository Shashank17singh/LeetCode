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
    void fun(TreeNode* root, int k, TreeNode* &ans){
        if(root==NULL) return;
        if(root->val==k){
            ans=root;
            return;
        }
        if(root->val>k){
            fun(root->left,k,ans);
        }
        else fun(root->right,k,ans);
        return;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=NULL;
        fun(root,val,ans);
        return ans;
    }
};