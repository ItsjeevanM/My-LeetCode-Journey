class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0, last = height.size() - 1;
        int total = 0; // initialize total

        while (first < last) {  // loop until pointers meet
            int width = last - first;  // correct width
            int h = min(height[first], height[last]);
            int currarea = width * h;
            total = max(total, currarea);  // update max

            // move the pointer pointing to the shorter line
            if (height[first] < height[last]) {
                first++;
            } else {
                last--;
            }
        }

        return total;
    }
};
