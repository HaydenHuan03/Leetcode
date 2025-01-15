class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        res = None
        cnt = 0

        for num in nums:
            if cnt == 0:
                res = num
            cnt += 1 if res == num else -1
        
        return res
            