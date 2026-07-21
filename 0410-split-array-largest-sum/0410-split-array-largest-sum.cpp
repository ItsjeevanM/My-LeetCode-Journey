class Solution {
public:
    bool canSplit(vector<int>& nums, int k, long long maxSum) {
        int parts = 1;
        long long curr = 0;

        for (int num : nums) {
            if (curr + num <= maxSum) {
                curr += num;
            } else {
                parts++;
                curr = num;
                if (parts > k)
                    return false;
            }
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(), nums.end());
        long long high = 0;

        for (int num : nums)
            high += num;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (canSplit(nums, k, mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};
