class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double> res;

        sort(nums.begin(), nums.end());

        while(!nums.empty()){
            int min = nums.front();
            int max = nums.back();
            res.insert((max + min)/2.0);

            nums.erase(nums.begin());
            nums.pop_back();
        }

        return res.size();
    }
};