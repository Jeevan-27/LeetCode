class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int largestSum=INT_MIN;

        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum>largestSum){
        //             largestSum=sum;
        //         }
        //     }
        // }
        // return largestSum;

        int largestSum=INT_MIN;
        int sum=0;

        for(int num:nums){
            sum=max(num,sum+num);
            largestSum=max(largestSum,sum);
        }

        return largestSum;
    }
};