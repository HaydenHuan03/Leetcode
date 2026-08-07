class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> frequency = new HashMap<>();

        for(int n : nums){
            frequency.merge(n, 1, Integer::sum);
        }

        List<Integer>[] bucket = new List[nums.length + 1];
        for(Map.Entry<Integer, Integer> entry : frequency.entrySet()){
            int freq = entry.getValue();
            if(bucket[freq] == null) bucket[freq] = new ArrayList<>();
            bucket[freq].add(entry.getKey());
        }

        int[] result = new int[k];
        int idx = 0;
        for(int freq = bucket.length - 1; freq >= 0 && idx < k; freq--){
            if(bucket[freq] != null){
                for(int num : bucket[freq]){
                    result[idx++] = num;
                    if(idx==k) break;
                }
            }
        }

        return result;
    }
}