class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        Map<Character, Integer> seen = new HashMap<>();

        for(char c : magazine.toCharArray()){
            seen.put(c, seen.getOrDefault(c, 0)+1);
        }

        for(char s : ransomNote.toCharArray()){
            if(!seen.containsKey(s) || seen.get(s) <= 0){
                return false;
            }

            seen.put(s, seen.get(s)-1);
        }

        return true;
    }
}