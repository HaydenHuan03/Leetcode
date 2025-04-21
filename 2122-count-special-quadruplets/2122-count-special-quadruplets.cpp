class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int>res;

        for(int b = 1; b <= nums.size()-2; b++){
            for(int a = 0; a < b; a++){
                res[nums[b] + nums[a]]++;
            }

            for(int d = b+2; d < nums.size(); d++){
                for(int c = b+1; c < d; c++){
                    if(res.find(nums[d]-nums[c]) != res.end()){
                        count += res[nums[d] - nums[c]];
                    }
                }
            }

            res.clear();
        }

        return count;
    }
};