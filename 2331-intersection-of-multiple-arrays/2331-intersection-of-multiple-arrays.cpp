class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int size = nums.size();
        unordered_map<int, int>freq;
        vector<int> res;

        for(size_t i = 0; i < nums.size(); i++){
            for(size_t j = 0; j < nums[i].size(); j++){
                freq[nums[i][j]]++;
            }
        }

        for(const auto [key, value] : freq){
            if(value == size){
                res.push_back(key);
            }
        }

        sort(res.begin(), res.end());

        return res;
    }
};