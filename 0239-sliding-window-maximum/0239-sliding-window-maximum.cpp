class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int left = 0;
        int n = nums.size();

        vector<int>answer;
        deque<int> Deque;

        for(int i = 0;i<n;i++){
            if(!Deque.empty() && Deque.front() <= i - k)
                Deque.pop_front();

            while(!Deque.empty() && nums[Deque.back()] <= nums[i])
                Deque.pop_back();

            Deque.push_back(i);

            if(i>= k -1)
                answer.push_back(nums[Deque.front()]);
        }
        return answer;
    }
};