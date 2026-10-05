class Solution {
    public int majorityElement(int[] nums) {
        int major = nums.length/2;
        int res = 0;
        Map<Integer, Integer> freq = new HashMap<>();

        for(int num : nums){
            freq.put(num, freq.getOrDefault(num, 0)+1);

            if(freq.get(num) > major){
                res = num;
            }
        }

        return res;
    }
}