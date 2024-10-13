int dominantIndex(vector<int>& nums) {
        int maxm = INT_MIN;
        int secmaxm =INT_MIN;
        int ind=0;
        for(int i=0;i<nums.size();i++){
            if(maxm<nums[i]){
                ind=i;
                secmaxm=maxm;
                maxm=nums[i];
            }
            if(maxm>nums[i] && secmaxm<nums[i]){
                secmaxm=nums[i];
            }
        }
        if(maxm>=secmaxm*2){
            return ind;
        }
        else{
            return -1;
        }
    }
