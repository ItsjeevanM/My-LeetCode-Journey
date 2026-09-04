class Solution {
public:
bool ispalindrome(const string &s, int left, int right){
    while(left < right){
        if(s[left++] != s[right--]) return false;
    }
    return true;
}
    bool validPalindrome(string s) {
        // if first letter == last letter , then print true , or else not 
        int left = 0, right = s.size() -1;
        while(left < right){
            if(s[left] != s[right]){
                return ispalindrome(s,left +1, right) || ispalindrome(s,left , right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};