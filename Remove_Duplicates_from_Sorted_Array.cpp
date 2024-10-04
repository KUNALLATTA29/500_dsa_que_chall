 int removeDuplicates(vector<int>& nums) {
        int u=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[u]){
                u++;
                nums[u]=nums[i];
            }
        }
        return u+1;
    }
