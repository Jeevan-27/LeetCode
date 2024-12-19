class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        int len=0;
        for(auto j:mp){
            if(j.second%2==0){
                len+=j.second;
            }
            else{
                len+=j.second-1;
            }
        }

        if(len<s.length()){
            len+=1;
        }
        return len;
    }
};