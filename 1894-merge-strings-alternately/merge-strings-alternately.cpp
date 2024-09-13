class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l=word1.length()+word2.length();
        string word3;

        int i=0,j=0;
        int k=0;
        while((i<word1.length())&&(j<word2.length())){
            word3+=word1[i];
            i++;

            word3+=word2[j];
            j++;
        }

        if(i<word1.length()){
            for(int a=i;a<word1.length();a++){
                word3+=word1[a];
            }
        }

        if(j<word2.length()){
            for(int a=j;a<word2.length();a++){
                word3+=word2[a];
            }
        }

        return word3; 
    }
};