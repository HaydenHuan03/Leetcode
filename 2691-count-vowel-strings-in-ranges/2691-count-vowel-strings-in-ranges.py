class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        #get the list length
        n = len(words)
        #create a vowel dictionary
        vowel = {'a', 'e', 'i', 'o', 'u'}
        #create a prefix
        Prefix = [0] * (n+1)

        #for loop
        for i in range(n):
            Prefix[i+1] = Prefix[i]
            if words[i][0] in vowel and words[i][-1] in vowel:
                Prefix[i+1] += 1
        
        ANS = []
        for query in queries:
            ANS.append(Prefix[query[1]+1]- Prefix[query[0]])
        
        return ANS
