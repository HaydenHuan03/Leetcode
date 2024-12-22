class Solution:
    def isPalindrome(self, x: int) -> bool:
        ##base case
        if x < 0:
            return False
        
        reverse = 0
        copy = x

        while x > 0:
            reverse = (reverse * 10) + (x % 10)
            x //= 10
        
        return reverse == copy
        