class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        n = len(words)
        cnt = 0

        for i in range(n):
            for j in range(i+1, n):
                str1 = words[i]
                str2 = words[j]

                #str1 cannot have a longer length than str2
                if len(str1) > len(str2):
                    continue
                
                if str2.startswith(str1) and str2.endswith(str1):
                    cnt += 1
        
        return cnt

        