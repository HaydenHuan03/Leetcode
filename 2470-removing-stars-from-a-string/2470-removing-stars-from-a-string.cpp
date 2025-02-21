class Solution {
public:
    string removeStars(string s) {
        string letter = "";
        int i = 0;

        while(i < s.size()){
            if(s[i] == '*'){
                letter.pop_back();
            }else{
                letter += s[i];
            }
            i++;
        }      
        return letter;
    }
};