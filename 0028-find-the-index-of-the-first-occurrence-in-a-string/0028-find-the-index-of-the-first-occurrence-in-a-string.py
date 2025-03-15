class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        #Ensure enough space of haystack to find needle
        for i in range(len(haystack) - len(needle) + 1):
            #if fit then finding needle
            if haystack[i:i+len(needle)] == needle:
                return i
        #if not found, return -1
        return -1
        