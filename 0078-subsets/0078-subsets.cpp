class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;

        backtrack(nums, subset, result, 0);

        return result;
    }

    void backtrack(vector<int>& nums, vector<int>& subset, vector<vector<int>>& result, int idx){
        if(nums.size() == idx){
            result.push_back(subset);
            return;
        }

        subset.push_back(nums[idx]);
        backtrack(nums, subset, result, idx+1);
        subset.pop_back();
        backtrack(nums, subset, result, idx+1);
    }
};