class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;

        for(const string& str : strs){
            string sortedString = str;
            sort(sortedString.begin(), sortedString.end());

            group[sortedString].push_back(str);
        }

        vector<vector<string>> result;
        for(const auto& pair : group){
            result.push_back(pair.second);
        }

        return result;
    }
};