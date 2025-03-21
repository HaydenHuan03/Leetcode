class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int right = nums.size()-1;
        int left = 0;

        while(left < right){
            int total = nums[left] + nums[right];

            if(total == k){
                count += 1;
                left++;
                right--;
            }

            if(total < k ){
                left++;
            }

            if(total > k){
                right--;
            }
        }

        return count;
    }
};