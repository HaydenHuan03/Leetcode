class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_set<int> distinct(nums.begin(), nums.end());
        int distinctSize = distinct.size();

        for(int i = 0; i < n; i++){
            unordered_set<int> current;
            for(int j = i; j < n; j++){
                current.insert(nums[j]);

                if(current.size() == distinctSize){
                    count++;
                }
            }
        }

        return count;
    }
};