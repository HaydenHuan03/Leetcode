class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0, right = 1;
        int maxLength = 0;
        while(right < nums.size()){
            int diff = nums[right] - nums[left];

            if(diff == 1){
                maxLength = max(maxLength, right - left + 1);
                right++;
            }else if(diff <= 1){
                right++;
            }else{
                left++;
            }
        }

        return maxLength;
    }
};