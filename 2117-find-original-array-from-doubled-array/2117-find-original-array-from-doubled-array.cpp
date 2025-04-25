class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> result;
        int n = changed.size();

        if(n % 2 != 0){
            return {};
        }

        sort(changed.begin(), changed.end());

        unordered_map<int, int>freq;

        for(int num : changed){
            freq[num]++;
        }

        for(int num : changed){
            if(freq[num] == 0) continue;

            if(freq[num * 2] > 0){
                result.push_back(num);

                freq[num]--;
                freq[num*2]--;
            }else{
                return{};
            }
        }

        if(result.size() == n/2){
            return result;
        }

        return {};
    }
};