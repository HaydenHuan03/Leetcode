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
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return -1;

        queue<TreeNode*> q;
        q.push(root);
        int result = root->val;

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);

            result = node->val;
        }

        return result;
    }
};