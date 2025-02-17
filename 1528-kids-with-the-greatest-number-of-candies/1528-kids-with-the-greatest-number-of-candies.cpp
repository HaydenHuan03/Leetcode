class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> result;

        for(int j = 0; j < n; j++){
            result.push_back(candies[j] + extraCandies >= max);
        }

        return result;
    }
};