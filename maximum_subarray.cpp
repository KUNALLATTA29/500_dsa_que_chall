class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0], max_ending=nums[0];
        for(int i=1;i<nums.size();i++){
            max_ending = max(nums[i], nums[i]+max_ending);
            maxi=max(max_ending,maxi);

        }

        return maxi;
        
    }
};        
