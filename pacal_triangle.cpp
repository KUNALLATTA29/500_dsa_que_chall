int solve(int line, int i){
            int res = 1;
            if(i>line-i){
                i=line-i;
            }
            for (int k = 0; k < i; k++) {
                res *= (line - k);
                res /= (k + 1);
            }
            return res;
        }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);
        for(int i=0; i<numRows; i++){
            for(int j=0;j<=i;j++){
                arr[i].push_back(solve(i,j));
            }
        }
        return arr;
    }
