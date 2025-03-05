class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count = 0;

        unordered_map<string, int> set1;
        unordered_map<string, int> set2;

        for(auto word : words1){
            set1[word]++;
        }

        for(auto word : words2){
            set2[word]++;
        }

        for(auto [key, val] : set1){
            if(val == 1 && set2[key] == 1){
                count++;
            }
        }

        return count;
    }
};