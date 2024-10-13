int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,i=0,j=1,n=nums.size();
        while(j<n){
            if(nums[j]-nums[i]==1){
                ans = max(ans,j-i+1);
                j++;
            }
            else{
                if(nums[j] - nums[i] > 1){
                    i++;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
