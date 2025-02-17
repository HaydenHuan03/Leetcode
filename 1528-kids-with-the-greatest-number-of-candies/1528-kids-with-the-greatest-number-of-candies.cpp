class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int i = 0, max = 0;
        vector<bool> result;

        while(i < n){
            if(candies[i] > max){
                max = candies[i];
            }
            i++;
        }

        for(int j = 0; j < n; j++){
            if(candies[j] + extraCandies >= max){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }

        return result;
    }
};