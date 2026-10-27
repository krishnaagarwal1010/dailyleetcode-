class Solution {
    public int missingNumber(int[] nums) {
        int originalsum  = 0;
        for( int i = 0; i < nums.length ; i++){
            originalsum += nums[i];
        }
        return (nums.length * (nums.length + 1) / 2 ) - originalsum;
    }
}