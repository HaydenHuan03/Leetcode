class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int left = 0, count0 = 0, count1 = 0, result = 0;

        for(int right = 0; right < s.length(); right++){
            if(s[right] == '0') count0++;
            else count1++;

            while(count0 > k && count1 > k){
                if(s[left] == '0' ) count0--;
                else count1--;
                left++;
            }

            result += (right-left+1);
        }

        return result;
    }
};