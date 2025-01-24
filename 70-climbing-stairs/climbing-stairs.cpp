class Solution {
public:
    int climbStairs(int n) {
        int first=1;
        int second=2;

        if(n==1){
            return first;
        }
        else if(n==2){
            return second;
        }

        int current=0;
        for(int i=3;i<=n;i++){
            current=first+second;
            first=second;
            second=current;
        }

        return current;
    }
};