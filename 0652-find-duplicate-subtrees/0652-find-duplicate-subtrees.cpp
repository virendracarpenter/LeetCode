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

#define v vector<TreeNode*> 
#define umap unordered_map<string, int>

class Solution {
public:
    v findDuplicateSubtrees(TreeNode* root) {
        umap frequency;
        v result;
        findDuplicates(root, frequency, result);
        return result;
    }
    
private:
    string findDuplicates(TreeNode* node, umap& frequency, v& result) {
        if (!node)
            return "#";
        string leftIdentifier = findDuplicates(node->left, frequency, result);
        string rightIdentifier = findDuplicates(node->right, frequency, result);
        string identifier = to_string(node->val) + "," + leftIdentifier + "," + rightIdentifier;
        frequency[identifier]++;
        
        if (frequency[identifier] == 2) {
            result.push_back(node);
        }
        
        return identifier;
    }
};