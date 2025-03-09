class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> first;

        for(char c : s){
            first[c]++;

            if(first[c] == 2){
                return c;
            }
        }

        return ' ';
    }
};