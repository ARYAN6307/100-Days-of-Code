class Solution {
   public static int countHillValley(int[] nums) {
    int count = 0;
    List<Integer> list = new ArrayList<>(Arrays.asList(nums[0]));
    for (int n : nums) {
        if (list.get(list.size() - 1) == n) continue; //Removing consecutive Duplicate
        list.add(n);
    }
    for (int i = 1; i < list.size() - 1; i++) {
        int cur = list.get(i), prev = list.get(i - 1), next = list.get(i + 1);
        if ((cur > prev && cur > next) || (cur < prev && cur < next)) // check for valley or hill by comparing with just neighbours
            count++;
    }
    return count;
}
}