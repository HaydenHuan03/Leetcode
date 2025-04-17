class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length() < 3){
            return 0;
        }

        int count = 0;

        for(int i = 0; i <= s.length()-3; i++){
            unordered_map<char, int>freq;

            freq[s[i]]++;
            freq[s[i+1]]++;
            freq[s[i+2]]++;

            if(freq.size() == 3){
                count++;
            }
        }

        return count;
    }
};