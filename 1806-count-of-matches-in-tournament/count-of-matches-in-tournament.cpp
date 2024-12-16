class Solution {
public:
    int numberOfMatches(int n) {
        int totalMatches=0;
        int teams=n;

        // while(teams!=1){
        //     int matches=0;
        //     if(teams%2==0){
        //         matches=teams/2;
        //         teams=teams/2;
        //         totalMatches+=matches;
        //     }
        //     else{
        //         matches=(teams-1)/2;
        //         teams=(teams-1)/2+1;
        //         totalMatches+=matches;
        //     }
        // }

        return n-1;
    }
};