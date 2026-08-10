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
    vector<int>temp;
    void fun(TreeNode* root){
        if(root==NULL) return;
        fun(root->left);
        temp.push_back(root->val);
        fun(root->right);
        return;
    }
    bool findTarget(TreeNode* root, int k) {
        fun(root);
        int i=0;
        int j=temp.size()-1;
        while(i<j){
            if((temp[i]+temp[j])==k) return true;
            else if((temp[i]+temp[j])<k) i++;
            else j--;
        }
        return false;
    }
};