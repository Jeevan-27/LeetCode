class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,max=INT_MIN;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i]){
                min=prices[i];
                max=prices[i];
            }
            if(max<prices[i]){
                max=prices[i];
            }

            if(max-min>profit){
                profit=max-min;
            }
        }

        return profit;
    }
};