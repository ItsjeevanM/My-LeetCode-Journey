class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            int smalls = nums[i];
            int sum = 0;
            while(smalls > 0){
                sum += smalls % 10;
                smalls /= 10;
            }
            if(sum == i)
                return i;
        }
        return -1;
    }
};