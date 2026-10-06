class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int[] count = new int[26];

        for(char c : magazine.toCharArray()){
            count[c-'a']++;
        }

        for(char s : ransomNote.toCharArray()){
            if(count[s-'a'] == 0){
                return false;
            }

            count[s-'a']--;
        }

        return true;
    }
}