class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> result;

        int left = 0, right = nums.size()-1, firstOccurence = -1;

        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] < target){
                left = mid + 1;
            }else if(nums[mid] > target){
                right = mid - 1;
            }else{
                firstOccurence = mid;
                right = mid - 1;
            }
        }

        if(firstOccurence == -1){
            return result;
        }

        for(int i = firstOccurence; i < nums.size() && nums[i] == target; i++){
            result.push_back(i);
        }

        return result;
    }
};