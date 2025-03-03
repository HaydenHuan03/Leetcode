class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>nums(nums1.begin(), nums1.end());
        vector<int> res;

        for(int i = 0; i < nums2.size(); i++){
            if(nums.find(nums2[i]) != nums.end()){
                res.push_back(nums2[i]);
                nums.erase(nums2[i]);
            }
        }

        return res;
    }
};