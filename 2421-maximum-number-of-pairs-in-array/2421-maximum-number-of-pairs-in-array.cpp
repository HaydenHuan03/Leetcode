class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int>freq;

        for(int num : nums){
            freq[num]++;

            if(freq[num] % 2 == 0){
                count++;
            }
        }

        int left = nums.size() - (count * 2);

        return {count, left};
    }
};