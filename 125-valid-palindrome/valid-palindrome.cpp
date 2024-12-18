class Solution {
public:
    bool isPalindrome(string s) {
        // stack<char> st;
        // stack<char> st2;

        // for(int i=0;i<s.length();i++){
        //     if(iswalnum(s[i])){
        //         st.push(tolower(s[i])); 
        //     }
        // }

        // stack<char> temp=st;
        // while(!st.empty()){
        //     st2.push(st.top());
        //     st.pop();
        // }

        // while(!temp.empty()){
        //     if(st2.top()!=temp.top()){
        //         return false;
        //     }
        //     st2.pop();
        //     temp.pop();
        // }

        // return true;

        int left = 0, right = s.length() - 1;
        while (left < right) {
            while (left < right && !isalnum(s[left])) left++;   // Skip non-alphanumeric
            while (left < right && !isalnum(s[right])) right--; // Skip non-alphanumeric
            if (tolower(s[left]) != tolower(s[right])) return false; // Compare
            left++;
            right--;
        }
        return true;
    }
};