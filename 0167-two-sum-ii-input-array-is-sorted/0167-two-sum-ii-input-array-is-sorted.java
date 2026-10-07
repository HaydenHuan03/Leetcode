class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] res = new int [2];
        int slow = 0;
        int fast = numbers.length-1;

        while(slow < fast){
            if(numbers[slow] + numbers[fast] < target){
                slow++;
            }else if(numbers[slow] + numbers[fast] > target){
                fast--;
            }else{
                return new int[]{slow+1, fast+1};
            }
        }

        return res;
    }
}