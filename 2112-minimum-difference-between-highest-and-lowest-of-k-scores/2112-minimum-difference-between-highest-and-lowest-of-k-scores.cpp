class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(k <= 1 || n <= 1){
            return 0;
        }

        sort(nums.begin(), nums.end());
        int minNum = INT_MAX;

        for(int i = 0; i <= n - k; i++){
            int diff = nums[i+k-1] - nums[i];
            minNum = min(minNum, diff);
        }

        return minNum;
    }
};