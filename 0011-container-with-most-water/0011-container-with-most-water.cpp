class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0;
        int last = height.size() - 1;
        int total = 0;

        while(first < last){
            int width = last - first;
            int h = min(height[first], height[last]);
            int currarea = width * h;

            total = max(currarea, total);

            if(height[first]< height[last]){
                first++;
            }else{
                last--;
            }
        }
        return total;
    }
};