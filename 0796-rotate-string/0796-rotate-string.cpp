class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        string rotated = s + s;
        return rotated.find(goal) != string::npos;
    }
};