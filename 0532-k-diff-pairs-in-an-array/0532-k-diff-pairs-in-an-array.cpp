class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0)  return 0;
        unordered_map<int , int> counting ;
        
        for(int num : nums)
            counting[num]++;  
            int count = 0;

        for( auto &it : counting){
            int num = it.first;

            if(k == 0){
                if(it.second > 1)
                count++;
            }
            else {
                if(counting.count(num + k))
                count++;
            }
        }
        return count; 
    }
};