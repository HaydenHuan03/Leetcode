class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int>freq_s, freq;

        for(char c : s){
            freq_s[c]++;
        }

        for(char t : target){
            freq[t]++;
        }

        int minCopies = INT_MAX;
        for(const auto& pair : freq){
            char letter = pair.first;
            int required = pair.second;

            if(freq_s[letter] == 0) return 0;

            minCopies = min(minCopies, freq_s[letter]/required);
        }
        return minCopies;
    }
};