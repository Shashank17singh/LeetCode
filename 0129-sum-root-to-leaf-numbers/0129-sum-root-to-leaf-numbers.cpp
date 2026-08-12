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
    vector<int>res;
    void fun(TreeNode* root, int sum){
        if(root==NULL) return;
        sum=sum*10+root->val;
        if(root->left==NULL && root->right==NULL){
            res.push_back(sum);
        }
        fun(root->left,sum);
        fun(root->right,sum);
    }
    int sumNumbers(TreeNode* root) {
        res.clear();
        fun(root,0);
        int ans=0;
        for(int i=0;i<res.size();i++){
            ans+=res[i]; 
        }
        return ans;
    }
};