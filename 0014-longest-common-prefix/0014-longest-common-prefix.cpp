class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";    
        sort(strs.begin(), strs.end());

        string start = strs[0];
        string last = strs[strs.size() - 1];  
        string ans = "";

        int minlength = min(start.size(), last.size());
        for(int i = 0;i<minlength;i++){
            if(start[i] != last[i]) break;
            ans += start[i];
        }
        return ans;
    }
};