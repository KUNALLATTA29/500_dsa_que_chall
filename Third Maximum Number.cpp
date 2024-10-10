int thirdMax(vector<int>& nums) {
        set<int> ans;
        
        for(auto it:nums){
            ans.insert(it);
            if(ans.size()>3){
                ans.erase(ans.begin());
            }
        }
        if(ans.size()<3){
            return *ans.rbegin();
        }else{
            return *ans.begin();
        }
        return 0;
    }
