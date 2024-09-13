class Solution {
    public void moveZeroes(int[] nums) {
        int[] result=new int[nums.length];
        int s=0;

        if(nums.length!=1){
            for(int i=0;i<nums.length;i++){
                if(nums[i]!=0){
                    result[s]=nums[i];
                    s++;
                }
            }

            for(int i=s;i<nums.length;i++){
                result[i]=0;
            }

            for(int i=0;i<nums.length;i++){
                nums[i]=result[i];
            }
        }
    }
}