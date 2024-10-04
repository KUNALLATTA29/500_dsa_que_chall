 int removeElement(vector<int>& nums, int val) {
        int u=0;
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[u]=nums[i];
                u++;
            }
        }
        return u;
    }
