class Solution:
    def isPalindrome(self, s: str) -> bool:
        #join all alphabet with no space
        s = ''.join(c.lower() for c in s if c.isalnum())
        left = 0 
        right = len(s) - 1

        while left < right:
            if s[left] != s[right]:
                return False
            left += 1
            right -= 1
        
        return True
        