vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxV = (1<<maximumBit) - 1;
        int n = nums.size();
        nums[0] ^= maxV;
        for(int i=1; i<n; ++i){
            nums[i] ^= nums[i-1];
        }
        for(int i=0; i<n/2; ++i){
            swap(nums[i], nums[n-i-1]);
        }
        return nums;
    }
