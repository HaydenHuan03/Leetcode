class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0, right = num;

        while(left <= right){
            int mid = left + (right-left)/2;

            if(mid == sqrt(num)){
                return true;
            }else if(mid < sqrt(num)){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }

        return false;
    }
};