vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size(); //rows
        int n = matrix[0].size(); //Columns
        vector<vector<int>> res(n,vector<int>(m));
        for(int j=0;j<n;j++){   //colums
            for(int i=0;i<m;i++){  //Rows
                res[j][i] = matrix[i][j];
            }
        }
        return res;
    }
