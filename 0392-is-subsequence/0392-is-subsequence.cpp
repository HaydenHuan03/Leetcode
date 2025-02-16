class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1 = 0;

        for(int i = 0; i < t.length(); i++){
            if(s1 < s.length() && s[s1] == t[i]){
                s1++;
            }
        }

        return s1 == s.length();
    }
};