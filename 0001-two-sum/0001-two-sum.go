func twoSum(nums []int, target int) []int {
  hashset := make(map[int]int)
    for i := 0; i < len(nums); i++ {
        if val, ok := hashset[target-nums[i]]; ok {
            return []int{i, val}
        } else {
            hashset[nums[i]] = i
        }
    }
    return []int{}   
}
