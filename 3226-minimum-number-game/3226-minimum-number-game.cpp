class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        vector<int> result;

        while(pq.size() > 1){
            int first = pq.top();
            pq.pop();
            int sec = pq.top();
            pq.pop();

            result.push_back(sec);
            result.push_back(first);
        }

        return result;
    }
};