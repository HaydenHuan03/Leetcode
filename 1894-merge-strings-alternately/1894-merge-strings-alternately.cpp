class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, j = 0;
        
        while(i < word1.size() && j < word2.size()){
            merged += word1[i++];
            merged += word2[j++];
        }

        merged += word1.substr(i) + word2.substr(j);

        return merged;
    }
};