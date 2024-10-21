vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
         int n = grid.size();
        vector<vector<int>> result(n - 2, vector<int>(n - 2));

        for (int i = 0; i <= n - 3; ++i) 
        {
            for (int j = 0; j <= n - 3; ++j) 
            {
                int maxValue = grid[i][j];
                for (int di = 0; di < 3; ++di) 
                {
                    for (int dj = 0; dj < 3; ++dj) 
                    {
                        maxValue = max(maxValue, grid[i + di][j + dj]);
                    }
                }
                result[i][j] = maxValue;
            }
        }

        return result;
    }
