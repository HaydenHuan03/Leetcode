class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> num(nums.begin(), nums.end());
        vector<int> ans;
        int size = nums.size();

        for(int i = 1; i <= size; i++){
            if(num.find(i) == num.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};