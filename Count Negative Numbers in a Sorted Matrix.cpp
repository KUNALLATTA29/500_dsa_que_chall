 int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int i=0,j = col-1;
        int count = 0;

        while(i<row && j>=0){
            if(grid[i][j] < 0){
                count += row - i;
                j--;
            }else{
                i++;
            }
        }
        return count;
    }