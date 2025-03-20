class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = INT_MAX / 3;

        for(int i = 0; i < nums.size()-2; i++){
            int left = i + 1, right = nums.size()-1;
            while(left < right){
                int curr = nums[i] + nums[left] + nums[right];
                if(abs(curr - target) < abs(closest - target)){
                    closest = curr;
                }

                if(curr < target){
                    left++;
                }else if(curr > target){
                    right--;
                }else{
                    return curr;
                }
            }
        }

        return closest;
    }
};