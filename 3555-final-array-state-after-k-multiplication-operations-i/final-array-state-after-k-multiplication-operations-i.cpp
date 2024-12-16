class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k>0){
            int smallIndex=0;
            int min=INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<min){
                    smallIndex=i;
                    min=nums[i];
                }
            }
            nums[smallIndex]*=multiplier;
            k--;
        }
        return nums;
    }
};