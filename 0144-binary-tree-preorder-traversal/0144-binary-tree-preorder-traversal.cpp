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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> val;
        preorder(root, val);
        return val;
    }
    void preorder(TreeNode* root,vector<int>& val){
        if(root == nullptr)
            return;
        val.push_back(root->val);
        preorder(root->left, val);
        preorder(root->right, val);
        
    }
};