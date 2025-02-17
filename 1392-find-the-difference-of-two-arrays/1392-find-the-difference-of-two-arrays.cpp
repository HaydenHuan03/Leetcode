class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res1(nums1.begin(), nums1.end());
        unordered_set<int> res2(nums2.begin(), nums2.end());

        vector<int> uniqueNum1, uniqueNum2;

        for(int num : res1){
            if(res2.find(num) == res2.end()){
                uniqueNum1.push_back(num);
            }
        }

        for(int num : res2){
            if(res1.find(num) == res1.end()){
                uniqueNum2.push_back(num);
            }
        }

        return {uniqueNum1, uniqueNum2};
    }
};