class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int>freq;

        for(int i : nums){
            freq[i]++;
        }

        for(const auto& [key, value] : freq){
            if(value % 2 != 0){
                return false;
            }
        }

        return true;
    }
};