class KthLargest {
    PriorityQueue <Integer> pq;
    int size;
    public KthLargest(int k, int[] nums) {
        this.size=k;
        pq=new PriorityQueue(k);
        for(int x:nums)
        {
            pq.offer(x);
            if(pq.size()>size)
                pq.poll();
        }
    }
    
    public int add(int val) {
        if(pq.size()<size)
            pq.offer(val); 
        else if(pq.peek()<val)
        {
            pq.poll();
            pq.offer(val);
        }
            return pq.peek();
    }
}