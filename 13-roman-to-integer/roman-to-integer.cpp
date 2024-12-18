class Solution {
public:
    int symbolToValue(char ch) {
        if (ch == 'I') {
            return 1;
        } else if (ch == 'V') {
            return 5;
        } else if (ch == 'X') {
            return 10;
        } else if (ch == 'L') {
            return 50;
        } else if (ch == 'C') {
            return 100;
        } else if (ch == 'D') {
            return 500;
        } else {
            return 1000;
        }
    }

    int romanToInt(string s) {
        int output = 0;
        int prevValue = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue = symbolToValue(s[i]);
            
            if (currValue < prevValue) {
                output -= currValue;
            } else {
                output += currValue;
            }
            
            prevValue = currValue;
        }

        return output;
    }
};