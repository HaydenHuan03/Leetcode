class Solution {
    public boolean isAnagram(String s, String t) {
        //Solution 1
        // if(s.length() != t.length()){
        //     return false;
        // }

        // char[] string1 = s.toCharArray();
        // char[] string2 = t.toCharArray();

        // Arrays.sort(string1);
        // Arrays.sort(string2);

        // if(Arrays.equals(string1, string2)){
        //     return true;
        // }

        // return false;

        //Solution 2
        if(s.length() != t.length()){
            return false;
        }

        int[] count = new int[26];

        for(int i = 0; i < s.length(); i++){
            count[s.charAt(i) - 'a']++;
            count[t.charAt(i) - 'a']--;
        }

        for(int num : count){
            if(num != 0){
                return false;
            }
        }

        return true;
    }
}