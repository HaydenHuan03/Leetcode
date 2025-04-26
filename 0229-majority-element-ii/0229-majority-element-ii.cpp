class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int>freq;
        unordered_set<int> seen;
        int n = nums.size();
        int count = n/3;

        if(n <= 1){
            return nums;
        }

        for(int num : nums){
            freq[num]++;
        }

        for(int num : nums){
            if(freq[num] > count && seen.find(num) == seen.end()){
                result.push_back(num);
                seen.insert(num);
            }
        }

        return result;
    }
};