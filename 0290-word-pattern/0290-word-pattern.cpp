class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>charToString;
        unordered_map<string, char>stringToChar;
        istringstream ss(s);
        string word;
        int i = 0;

        for(;ss>>word; i++){
            if(i >= pattern.size()) return false;

            char c = pattern[i];
            if(charToString.count(c) && charToString[c] != word){
                return false;
            }

            if(stringToChar.count(word) && stringToChar[word] != c){
                return false;
            }

            charToString[c] = word;
            stringToChar[word] = c;
        }
        return i == pattern.size();
    }
};