class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = 0, currSum = 0;
        for(auto i : nums){
            currSum += i;
        }

        for(int i = 0; i <= n; i++){
            total += i;
        }

        return total-currSum;
    }
};