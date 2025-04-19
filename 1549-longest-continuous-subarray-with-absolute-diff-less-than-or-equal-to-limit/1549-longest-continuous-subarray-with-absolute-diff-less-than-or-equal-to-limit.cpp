class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>minDeque, maxDeque;
        int left = 0;
        int result = 0;

        for(int right = 0; right < nums.size(); right++){
            //check if maxDeque empty or not and the check needs to replace the last element of maxDeque
            while(!maxDeque.empty() && nums[right] > nums[maxDeque.back()])
                maxDeque.pop_back();
            maxDeque.push_back(right);

            //check if minDeque empty or not and the check needs to replace the last element of minDeque
            while(!minDeque.empty() && nums[right] < nums[minDeque.back()])
                minDeque.pop_back();
            minDeque.push_back(right);

            while(!maxDeque.empty() && !minDeque.empty() && nums[maxDeque.front()] - nums[minDeque.front()] > limit){
                left = min(maxDeque.front(), minDeque.front()) + 1;
            
                while(!maxDeque.empty() && maxDeque.front() < left)
                    maxDeque.pop_front();
            
                while(!minDeque.empty() && minDeque.front() < left)
                    minDeque.pop_front();
            }

            result = max(result, right-left+1);
        }

        return result;
    }
};