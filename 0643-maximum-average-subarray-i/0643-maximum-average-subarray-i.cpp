class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage = 0.0;
        double total = 0;

        for(int i = 0; i < k; i++){
           total += nums[i];
        }

        maxAverage = total;
        for(int i = k; i<nums.size(); i++){
            total += nums[i];
            total -= nums[i-k];
            maxAverage = max(maxAverage, total);
        }

        return maxAverage / k;
    }
};