class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int left = 0;
        int right = 0;

        for(char c : s)
            if(c == '(')
                right++;
            else if (right > 0)
                right--;
            else 
                left++;
            return left + right;
    }
};