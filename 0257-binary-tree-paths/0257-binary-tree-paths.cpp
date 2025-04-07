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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return res;

        string path="";
        dfs(root, path, res);

        return res;
    }

    void dfs(TreeNode* node, string path, vector<string>& res){
        if(!node) return;

        if (!path.empty()) path += "->";
        path += to_string(node->val);

        if(!node->left && !node->right){
            res.push_back(path);
        }

        dfs(node->left, path, res);
        dfs(node->right, path, res);
    }
};