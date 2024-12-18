class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;

        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        int output=0;
        int prevValue=0;
        int currValue=0;        
        for(int i=s.length()-1;i>=0;i--){
            currValue=mp[s[i]];
            if(currValue<prevValue){
                output-=currValue;
            }
            else{
                output+=currValue;
            }

            prevValue=currValue;
        }

        return output;
    }
};
