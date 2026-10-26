#include <vector>

using namespace std;

class Solution {
private:
    long long dfs(vector<vector<int>>& grid, int r, int c) {
        int rows = grid.size();
        int cols = grid[0].size();

        // Boundary check and water check
        if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] <= 0) {
            return 0;
        }

        // Add current cell's value and mark as visited (sink the land)
        long long sum = grid[r][c];
        grid[r][c] = 0;

        // Traverse 4 directions
        sum += dfs(grid, r + 1, c);
        sum += dfs(grid, r - 1, c);
        sum += dfs(grid, r, c + 1);
        sum += dfs(grid, r, c - 1);

        return sum;
    }

public:
    int countIslands(vector<vector<int>>& grid, int k) {
        if (grid.empty() || grid[0].empty()) return 0;

        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] > 0) {
                    long long totalSum = dfs(grid, r, c);
                    if (totalSum % k == 0) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};