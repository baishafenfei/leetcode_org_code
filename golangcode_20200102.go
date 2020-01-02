func singleNumber(nums []int) int {
    a := 0

    for i,_ := range nums {
        a = a^nums[i]
    }
    return a
    
}
