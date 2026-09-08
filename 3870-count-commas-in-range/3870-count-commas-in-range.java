class Solution {
    public int countCommas(int n) {
        int digits = String.valueOf(n).length();
        int total = 0;
        int count = 0;
        int commas = 0;

        for(int i = 1; i <= digits; i++){
            int low = (int) Math.pow(10, i-1);
            int high = (int) Math.pow(10, i) -1;

            if(n >= high){
                count = high-low+1;
            }else{
                count = n-low+1;
            }

            commas = (i-1)/3;
            total += commas * count;
        }

        return total;
    }
}