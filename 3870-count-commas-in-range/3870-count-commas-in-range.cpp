class Solution {
public:
    int countCommas(int n) {
        // if a number after n = 1000 and above , based on the other digit we are going to count the number . 
        int count = 0;

        for(int i = 0;i<= n;i++){
            if(i >= 1000){
                count++;
            }
        }
    return count;
    }
};