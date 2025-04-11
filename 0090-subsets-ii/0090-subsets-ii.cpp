class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> combo;

        sort(nums.begin(), nums.end());
        backtrack(nums, result, combo, 0);

        return result;
    }

    void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& combo, int idx){
        result.push_back(combo);

        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[i-1]) continue;

            combo.push_back(nums[i]);
            backtrack(nums, result, combo, i+1);
            combo.pop_back();
        }
    }
};