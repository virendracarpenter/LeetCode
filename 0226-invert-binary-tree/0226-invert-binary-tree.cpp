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
#define l root->left
#define r root->right

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root; 
        swap(l,r);
        invertTree(l);
        invertTree(r);
        return root;
    }
};