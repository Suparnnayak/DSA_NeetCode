class Solution {
public:
    int rows, cols;
    bool pacific, atlantic;
    vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        rows = heights.size();
        cols = heights[0].size();

        vector<vector<int>> res;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                pacific = false;
                atlantic = false;

                dfs(heights, r, c, INT_MAX);

                if (pacific && atlantic)
                    res.push_back({r, c});
            }
        }

        return res;
    }

    void dfs(vector<vector<int>>& heights, int r, int c, int preval) {

        if (pacific && atlantic)
            return;

        if (r < 0 || c < 0) {
            pacific = true;
            return;
        }

        if (r >= rows || c >= cols) {
            atlantic = true;
            return;
        }

        // visited
        if (heights[r][c] == INT_MAX)
            return;

        // water cannot flow uphill
        if (heights[r][c] > preval)
            return;

        int temp = heights[r][c];
        heights[r][c] = INT_MAX;

        for (auto &dir : directions) {
            dfs(heights, r + dir[0], c + dir[1], temp);
        }

        heights[r][c] = temp;
    }
};