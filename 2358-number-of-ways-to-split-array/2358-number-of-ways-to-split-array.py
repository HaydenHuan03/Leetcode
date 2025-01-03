class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        total = sum(nums)
        left_sum = 0
        cnt = 0

        for i in range(len(nums)-1):
            left_sum += nums[i]
            right_sum = total - left_sum

            if left_sum >= right_sum:
                cnt += 1
        
        return cnt