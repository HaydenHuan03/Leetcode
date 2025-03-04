class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>freq;

        for(char c : s){
            freq[c]++;
        }

        auto it = freq.begin();
        int firstVal = it->second;

        for(const auto &pair : freq){
            if(pair.second != firstVal){
                return false;
            }
        }

        return true;
    }
};