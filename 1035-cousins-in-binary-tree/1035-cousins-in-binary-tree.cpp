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

TreeNode* parentX = nullptr;
TreeNode* parentY = nullptr;
int depthX = -1;
int depthY = -1;

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root) return false;

        dfs(root, nullptr,0, x, y);

        return (depthX==depthY) && (parentX != parentY);
    }
    
    void dfs(TreeNode* node, TreeNode* parent, int depth, int x, int y){
        if(!node) return;

        if(node->val == x){
            parentX = parent;
            depthX = depth;
        }

        if(node->val == y){
            parentY = parent;
            depthY = depth;
        }

        dfs(node->left, node, depth+1, x, y);
        dfs(node->right, node, depth+1, x, y);
    }
};