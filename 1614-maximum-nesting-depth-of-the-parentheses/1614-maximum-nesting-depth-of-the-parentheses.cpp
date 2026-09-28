class Solution {
public:
    int maxDepth(string s) {

        // use two pointers for apporaching this question . maxcount and count for knowing when to increase the pointer and where to decrease the pointer . if ( appear add to stack and increase the count++ , if ) appears remove the stack and decarse the count--. return max( maxcount , count);

     int count = 0;
     int maxcount = 0;
    for( char c : s){
        if(c == '('){
            count++;
            maxcount = max(maxcount , count);
        }else if( c == ')'){
            count--;
        }
    }
    return maxcount;
    }
};