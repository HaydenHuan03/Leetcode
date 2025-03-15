class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        length = len(max(word1, word2, key=len))
        word = ""

        for i in range(length):
            if(i < len(word1)):
                word += word1[i]
            
            if(i < len(word2)):
                word += word2[i]

        return word