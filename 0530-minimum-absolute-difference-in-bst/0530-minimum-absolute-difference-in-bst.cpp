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
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX;
        int prev = -1;
        inorderTraversal(root, prev, minDiff);
        return minDiff;
    }

    void inorderTraversal(TreeNode* root, int& prev, int& minDiff){
        if(!root) return;

        inorderTraversal(root->left, prev, minDiff);

        if(prev != -1){
            minDiff = min(minDiff, root->val - prev);
        }

        prev = root->val;

        inorderTraversal(root->right, prev, minDiff);
    }
};