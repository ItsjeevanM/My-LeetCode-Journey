class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>result;
        int n = nums.size();

        for(int i = 0;i<n;i++){
            if(i>k){
                result.erase(nums[i - k - 1]);
            }
            if(result.count(nums[i])){
                return true;
            }
            result.insert(nums[i]);
        }
        return false;
    }
};