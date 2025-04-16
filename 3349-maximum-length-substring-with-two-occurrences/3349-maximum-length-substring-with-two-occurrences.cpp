class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxCount = 0;
        int left = 0;
        unordered_map<char, int>freq;

        for(int right = 0; right < s.length(); right++){
            freq[s[right]]++;

            while(freq[s[right]] > 2){
               freq[s[left]]--;
               left++;
            }

            maxCount = max(maxCount, right-left+1);
        }

        return maxCount;
    }
};