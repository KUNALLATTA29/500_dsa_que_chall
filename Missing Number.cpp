 int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int result = n*(n+1)/2;
        int c=0;
        for(auto it:nums){
            c+=it;
        }
        return result-c;
    }
