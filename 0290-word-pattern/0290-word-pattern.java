class Solution {
    public boolean wordPattern(String pattern, String s) {
        String[] words = s.split(" ");

        if(pattern.length() != words.length){
            return false;
        }

        Map<Character, String> charToWord = new HashMap<>();
        HashSet<String> seen = new HashSet<>();

        for(int i = 0; i < pattern.length(); i++){
            char c = pattern.charAt(i);
            String w = words[i];

            if(charToWord.containsKey(c)){
                if(!charToWord.get(c).equals(w)){
                    return false;
                }
            }else{
                if(seen.contains(w)){
                    return false;
                }
                charToWord.put(c, w);
                seen.add(w);
            }
        }
        return true;
    }
}