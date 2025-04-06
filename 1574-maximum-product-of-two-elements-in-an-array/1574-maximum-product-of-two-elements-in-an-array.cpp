class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int first = pq.top() - 1;
        pq.pop();
        int sec = pq.top() - 1;
        pq.pop();

        return first*sec;
    }
};