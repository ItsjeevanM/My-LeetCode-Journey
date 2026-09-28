class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int>varies;
        int prefixsum = 0;

        varies[0] = 1;
        for(int i = 0;i<n;i++){
            prefixsum += nums[i]; // add the values 1, 2 ,3 
            int remove = prefixsum - k; // 1 - 2 = 1 , 2- 2 = 0, 3-2 = 1;
            if(varies.find(remove) != varies.end()){ // in hashmap finding the remove values till the end of the hashmap , if they are in the hashmap -> incrase the count . 
                count += varies[remove];
            }
            varies[prefixsum]++; // move the next value ; 
        }
        return count; // 1 + 1 = 2 , 1 + 1 = 2 . 
        // 1 + 2 = 3 , 3 = 3 . overall answer is 2 . 
    }
};