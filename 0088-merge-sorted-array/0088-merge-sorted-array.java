class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int pointer1 = m-1;
        int pointer2 = n-1;
        int insert = m+n-1;

        for(int i = insert; i >= pointer1; i--){
            if(i == pointer1){
                break;
            }
            nums1[i] = nums2[pointer2];
            pointer2--;
        }

        Arrays.sort(nums1);
    }
}