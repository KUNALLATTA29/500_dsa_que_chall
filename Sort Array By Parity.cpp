 vector<int> sortArrayByParity(vector<int>& nums) {
        int len = nums.size();
        int k = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] % 2 == 0) { 
                swap(nums[i], nums[k]);
                k++; 
            }
        }
        return nums;
    }
