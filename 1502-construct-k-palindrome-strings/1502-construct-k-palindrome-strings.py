class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        #base case
        if len(s) < k:
            return False
        if len(s) == k:
            return True

        frequency = [0] * 26
        odd_count = 0        

        for char in s:
            frequency[ord(char) - ord('a')] += 1

        for count in frequency:
            if count % 2 == 1:
                odd_count += 1
        
        return odd_count <= k