 vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int> res;
        for(int i=0;i<=rowIndex;i++){
            res.push_back(ans);
            ans=((rowIndex-i)*ans)/(i+1);
        }
        return res;
    }
