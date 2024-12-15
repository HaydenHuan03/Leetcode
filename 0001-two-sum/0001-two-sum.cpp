class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int arrSize = nums.size();

        for(int i = 0; i < arrSize-1; i++){
            for (int j = i+1; j < arrSize; j++){
                if(nums[i] + nums[j] == target)
                return {i, j};
            }
        }
        return {};
    }
};