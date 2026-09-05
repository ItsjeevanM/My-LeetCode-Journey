// max number in array - min number of array , if they are less than or equal to k , return the index;
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> stb(n);
        stb[n-1] = nums[n-1];
        for(int i = n-2;i>=0;i--){
            stb[i]= min(stb[i+1], nums[i]);
        } 

        int previousmax = 0;
        for(int i = 0;i<n;i++){
            previousmax = max(previousmax,nums[i]);
            if(previousmax - stb[i] <= k)
            return i;
        }
        return -1;
    }
};