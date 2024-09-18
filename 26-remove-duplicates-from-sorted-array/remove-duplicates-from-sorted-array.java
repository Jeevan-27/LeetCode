class Solution {
    public int removeDuplicates(int[] nums) {
        int l=nums.length;
        int[] expectedNums=new int[l];
        int k=0;

        expectedNums[k]=nums[0];
        k++;

        int i=1;
        while(i<l){
           if(nums[i]!=expectedNums[k-1]){
            expectedNums[k]=nums[i];
            k++;
           } 
           i++;
        }

        for(int j=0;j<k;j++){
           nums[j]=expectedNums[j];
        }

        return k;

    }
}