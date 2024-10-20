vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<pair<int,vector<int>>>u1;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int d=abs(i-rCenter)+abs(j-cCenter);
                u1.push_back({d,{i,j}});
            }
        }
        sort(u1.begin(),u1.end());
        vector<vector<int>>ans;
        for(auto i:u1){
            ans.push_back(i.second);
        }
        return ans;
    }
