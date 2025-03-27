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
    vector<int> sortedval;

    void inorder(TreeNode* node){
        if(!node) return;

        inorder(node->left);
        sortedval.push_back(node->val);
        inorder(node->right);
    }

    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        inorder(root);

        vector<vector<int>> ans;

        for(int q : queries){
            //lower_bound used to get the val just after the target.
            auto it = lower_bound(sortedval.begin(), sortedval.end(), q);

            int mini = (it == sortedval.begin()) ? -1 : *(prev(it));
            if( it!=sortedval.end()&& *it == q ) mini = q;
            int max = (it==sortedval.end())? -1 : *it;

            ans.push_back({mini, max});
        }
        return ans;
    }
};