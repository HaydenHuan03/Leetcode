class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size()-1, pos = -1;

        while(left<=right){
            int mid = left + (right-left) /2;

            if(letters[mid] > target){
                pos = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }

        return pos == -1? letters[0] : letters[pos];
    }
};