class Solution {
    public boolean isAnagram(String s, String t) {
        //Solution 1
        char[] string1 = s.toCharArray();
        char[] string2 = t.toCharArray();

        Arrays.sort(string1);
        Arrays.sort(string2);

        if(Arrays.equals(string1, string2)){
            return true;
        }

        return false;
    }
}