class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0, leftsum = 0;

        for(int num : nums){
            total += num;
        }

        for(int i = 0; i < nums.size(); i++){
            if(leftsum * 2 + nums[i] == total){
                return i;
            }
            leftsum += nums[i];
        }

        return -1;
    }
};