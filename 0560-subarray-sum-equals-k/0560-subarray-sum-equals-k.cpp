class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> vari;
        int count = 0;
        int prefixsum = 0;

        vari[0] = 1;
        for(int i = 0;i<n;i++){
            prefixsum += nums[i];
            int remove = prefixsum - k;
            if(vari.find(remove) != vari.end()){
                count += vari[remove];
            }
            vari[prefixsum]++;
        }
        return count;
    }
};