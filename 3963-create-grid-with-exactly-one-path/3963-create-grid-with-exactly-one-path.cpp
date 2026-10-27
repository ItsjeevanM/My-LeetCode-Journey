#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        // Initialize an m x n grid filled entirely with '#'
        vector<string> grid(m, string(n, '#'));

        // Fill row 0 with '.' from (0, 0) to (0, n-1)
        for (int c = 0; c < n; c++) {
            grid[0][c] = '.';
        }

        // Fill column (n-1) with '.' from (1, n-1) to (m-1, n-1)
        for (int r = 1; r < m; r++) {
            grid[r][n - 1] = '.';
        }

        return grid;
    }
};