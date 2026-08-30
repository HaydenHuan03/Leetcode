class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        int[] result = new int[k];

        for(int n : nums){
            freq.put(n, freq.getOrDefault(n, 0)+1);
        }

        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b)->a[1] - b[1]);

        for(Map.Entry<Integer, Integer> e : freq.entrySet()){
            int key = e.getKey();
            int value = e.getValue();
            pq.add(new int[]{key, value});
            if(pq.size() > k){
                pq.poll();
            }
        }

        for(int i = 0; i < k; i++){
            int[] pair = pq.poll();
            result[i] = pair[0];
        }

        return result;
    }
}