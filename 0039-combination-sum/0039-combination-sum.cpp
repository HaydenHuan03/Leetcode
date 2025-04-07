class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combo;
        calculate(combo, res, 0,0,candidates, target);
        return res;
    }

    void calculate(vector<int>& combo, vector<vector<int>>&res, int idx, int total, vector<int>& candidates, int target){
        if(total == target){
            res.push_back(combo);
            return;
        }

        if(total > target || idx >= candidates.size()){
            return;
        }

        combo.push_back(candidates[idx]);
        calculate(combo, res, idx, total + candidates[idx], candidates, target);
        combo.pop_back();
        calculate(combo, res, idx + 1, total, candidates, target);
    }
};