class Solution {
    public int longestPalindrome(String s) {
        Map<Character, Integer> frequency = new HashMap<>();

        for(char c : s.toCharArray()){
            frequency.put(c, frequency.getOrDefault(c, 0)+1);
        }

        int length = 0;
        boolean leftOver = false;

        for(int cnt : frequency.values()){
            length += (cnt / 2) * 2;
            if (cnt % 2 == 1){
                leftOver = true;
            }
        }

        if (leftOver){
            length += 1;
        }
        
        return length;

    }
}