class Solution {
    public int[] rearrangeArray(int[] nums) 
    {
        //add positive elements of array in queue.
        Queue<Integer> pos = new LinkedList<>();
        for(int i : nums)
        {
            if(i>=0) pos.add(i);
        }
        //add negative elements of array in queue.
        Queue<Integer> neg = new LinkedList<>();
        for(int i : nums)
        {
            if(i<0) neg.add(i);
        }
        //adding positive and negative elements sequentially
        for(int i=0; i<nums.length; i++)
        {
            if(i%2==0) nums[i]=pos.poll();

            else
            {
                nums[i]=neg.poll();
            }
        }
        return nums;
    }
}