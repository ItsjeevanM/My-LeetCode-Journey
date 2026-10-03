class Solution {
public:
    int longestValidParentheses(auto &s) {

        // use stack to push them into , pop when they are form complete open-close pair. 
        int res = 0;
        vector<int> stack = {-1};

        for(int i =0;i<s.size();i++){
            if(s[i] == '('){
                stack.push_back(i);
            }else{
                stack.pop_back();

            if(stack.empty()) 
                stack.push_back(i);
            else
                res = max(res, i- stack.back());
        }
        }
    return res;
    }
};