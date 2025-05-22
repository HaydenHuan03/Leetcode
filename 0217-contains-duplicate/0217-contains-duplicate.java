class Solution {
    public boolean containsDuplicate(int[] nums) {
        // Solution 1:
        // Arrays.sort(nums);

        // for(int i = 0; i < nums.length - 1; i++){
        //     if(nums[i] == nums[i + 1]){
        //         return true;
        //     }
        // }

        // return false;

        //Solution 2:
        Set<Integer> seen = new HashSet<>();

        for(int num : nums){
            if(seen.contains(num)) return true;
            seen.add(num);
        }

        return false;
    }
}