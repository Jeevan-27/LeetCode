class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ransomNoteMap;
        unordered_map<char,int> magazineMap;

        for(int i=0;i<magazine.length();i++){
            magazineMap[magazine[i]]++;
        }

        for(int i=0;i<ransomNote.length();i++){
            ransomNoteMap[ransomNote[i]]++;
        }

        for(int i=0;i<ransomNote.length();i++){
            if(magazineMap[ransomNote[i]]<ransomNoteMap[ransomNote[i]]){
                return false;
                break;
            }
        }

        return true;
    }
};