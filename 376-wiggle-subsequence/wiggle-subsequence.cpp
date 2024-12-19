class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        int res=0;

        if(n==1){
            res=1;
        }
        else if(n==2){
            if(nums[0]!=nums[1]){
                res=2;
            }
            else{
                res=1;
            }
        }
        else{
            int flag=0;

            if(nums[0]-nums[1]>0){
                flag=1;
                res+=1;
            }
            else if(nums[0]-nums[1]<0){
                flag=-1;
                res+=1;
            }

            for(int i=1;i<n-1;i++){
                if(flag==1 && nums[i]-nums[i+1]<0){
                    flag=-1;
                    res+=1;
                }
                else if(flag==-1 && nums[i]-nums[i+1]>0){
                    flag=1;
                    res+=1;
                }
                else if(flag==0){
                    if(nums[i]-nums[i+1]<0){
                        flag=-1;
                        res+=1;
                    }
                    else if(nums[i]-nums[i+1]>0){
                        flag=1;
                        res+=1;
                    }
                }
            }
            res+=1;
        }
    
        return res;
    }
};