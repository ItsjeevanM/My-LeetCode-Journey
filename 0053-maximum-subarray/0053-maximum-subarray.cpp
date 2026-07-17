class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long maxim = LLONG_MIN;
        long long sum = 0;
        int start ;
        int anstart = -1 , ansend = -1;

        for(int i = 0;i<n;i++){
            if(sum == 0){
                start = i;    
            }
            sum +=nums[i];

            if(sum > maxim){
                maxim = sum ;
                anstart = start;
                ansend = i;
            }

            if(sum < 0){
                sum = 0;
            }
        } 
        return maxim;  
    }
};