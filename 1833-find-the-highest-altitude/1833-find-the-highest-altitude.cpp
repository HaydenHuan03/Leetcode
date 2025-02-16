class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0, curr = 0;

        for(int g : gain){
            curr += g;
            max = std::max(max, curr);
        }

        return max;
    }
};