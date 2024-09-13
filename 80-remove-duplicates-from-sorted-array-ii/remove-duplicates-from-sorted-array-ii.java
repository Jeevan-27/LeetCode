class Solution {
    public int removeDuplicates(int[] nums) {
        int[] expectedNums=new int[nums.length];
        int[] count=new int[nums.length];

        int l=0;

        for(int i=0;i<nums.length-2;i++){
            if(nums[i]==nums[i+2]){
                count[i]=2;
            }
        }

        for(int i=0;i<nums.length;i++){
            if(count[i]<2){
                expectedNums[l]=nums[i];
                l++;
            }
        }

        for(int i=0;i<nums.length;i++){
            nums[i]=expectedNums[i];
        }

        return l; 
    }
}