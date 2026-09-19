class Solution {  
public:  
    int removeDuplicates(vector<int>& nums) {  

        if(nums.empty())
        return 0;

        int uniqueindex = 0;
        for(int i = 1; i < nums.size();i++){
            if(nums[i] != nums[uniqueindex]){
                uniqueindex++;
                nums[uniqueindex] = nums[i];
            }
        }
        return 1 + uniqueindex ;
        
    }
};