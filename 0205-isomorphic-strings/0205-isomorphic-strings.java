class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character, Character> iso = new HashMap<>();

        for(int i = 0; i < s.length(); i++){
            char sc = s.charAt(i);
            char tc = t.charAt(i);

            if(iso.containsKey(sc)){
                if(iso.get(sc) != tc){
                    return false;
                }
            }else if(iso.containsValue(tc)){
                    return false;
            }
            
            iso.put(sc, tc);
        }
        return true;
    }
}