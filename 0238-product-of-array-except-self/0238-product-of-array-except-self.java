class Solution {
    public int[] productExceptSelf(int[] nums) {
        int curr = 1;
        int length = nums.length;
        int[] res = new int[length];
        Arrays.fill(res,1);

        for(int i = 0; i < length; i++){
            res[i] *= curr;
            curr *= nums[i];
        }

        curr = 1;

        for(int i = length -1; i >= 0 ; i--){
            res[i] *= curr;
            curr *= nums[i];
        }

        return res;
    }
}