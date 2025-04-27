class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size() - 2; i++){
            int result = nums[i] + nums[i+2];

            if(nums[i+1] == result * 2){
                count += 1;
            }
        }

        return count;
    }
};