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
    bool check(TreeNode* a, TreeNode* b){
        if(a==NULL && b==NULL) return true;
        if(a==NULL || b==NULL) return false;
        if(a->val!=b->val) return false;
        bool r1=check(a->left,b->right);
        bool r2=check(a->right,b->left);
        return r1&&r2;
    }
    bool isSymmetric(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return true;
        if(root->left==NULL || root->right==NULL) return false;
        return check(root->left,root->right); 
    }
};