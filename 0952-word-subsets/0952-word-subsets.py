class Solution:
    def wordSubsets(self,A, B) -> List[str]:
        #count the word that appear in the passed parameter
        def count(word):
            ans = [0] * 26
            for letter in word:
                ans[ord(letter) - ord('a')] += 1
            return ans

        #get the frequency of letter that appear in B (words2)
        bmax = [0] * 26
        for b in B:
            for i, c in enumerate(count(b)):
                bmax[i] = max(bmax[i], c)
        
        ans = []
        #compute the frequency of letter that appear in word a then compare with bmax
        for a in A:
            if all(x >= y for x,y in zip(count(a), bmax)):
                ans.append(a)
        
        return ans
