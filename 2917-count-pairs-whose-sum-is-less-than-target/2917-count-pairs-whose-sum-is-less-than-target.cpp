class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1, count = 0;

        while(left<=right){
            if(nums[right] + nums[left] < target){
                count += (right-left);
                left++;
            }else{
                right--;
            }
        }

        return count;
    }
};