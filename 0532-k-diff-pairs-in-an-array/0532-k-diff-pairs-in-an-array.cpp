class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0) return 0;

        unordered_map<int, int> count;
        int result = 0;

        for(int num : nums){
            count[num]++;
        }

        for(auto& entry:count){
            int num = entry.first;

            //num - (num + k) = k
            //So, if find (num + k) inside the map, it will be a unique pair
            if(k > 0 && count.find(num + k)!= count.end()){
                result++;
            }

            //This situation is when only have 2 same value of num then k will be zero
            //So, if the freq of the num now, it will be counted as a unique pair also
            if(k == 0 && entry.second > 1){
                result++;
            }
        }
        return result;
    }
};