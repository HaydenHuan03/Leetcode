class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int>freq;
        int count = 0;

        for(int num : nums){
            freq[num]++;
        }

        for(const auto& pair : freq){
            int num = pair.first;

            if(freq.find(num+1) != freq.end()){
                int current = freq[num] + freq[num+1];
                count = max(count, current);
            }
        }

        return count;
    }
};