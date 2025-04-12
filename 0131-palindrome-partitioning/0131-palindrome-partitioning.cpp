class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> combo;

        backtrack(s, combo, result, 0);

        return result;
    }

    bool isPalindrome(string& s, int start, int end){
        while(start < end){
            if(s[start] != s[end]){
                return false;
            }

            start++;
            end--;
        }
        return true;
    }

    void backtrack(string& s, vector<string>& combo, vector<vector<string>>& result, int start){
        if(start >= s.length()){
            result.push_back(combo);
            return;
        }

        for(int end = start; end < s.length(); end++){
            if(isPalindrome(s, start, end)){
                combo.push_back(s.substr(start, end-start+1));
                backtrack(s, combo, result, end+1);
                combo.pop_back();
            }
        }
    }
};