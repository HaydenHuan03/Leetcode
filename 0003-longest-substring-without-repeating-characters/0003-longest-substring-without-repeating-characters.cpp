class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> visited;
        int maxLength = 0;
        int left = 0;

        for(int right = 0; right < s.size(); right++){
            if(visited.count(s[right])==0){
                visited.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
            }else{
                while(visited.count(s[right])){
                    visited.erase(s[left]);
                    left++;
                }
                visited.insert(s[right]);
            }
        }
        return maxLength;
    }
};