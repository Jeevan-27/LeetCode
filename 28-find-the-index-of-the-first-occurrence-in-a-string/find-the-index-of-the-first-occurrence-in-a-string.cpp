class Solution {
public:
    int strStr(string haystack, string needle) {
        int k=needle.length();

        if(k>haystack.length()){
            return -1;
        }

        if(k==haystack.length()){
            if(needle==haystack){
                return 0;
            }
        }

        string str;
        for(int i=0;i<=haystack.length()-k;i++){
            str=haystack.substr(i,k);
            if(str==needle){
                return i;
                break;
            }
        }

        return -1;
    }
};