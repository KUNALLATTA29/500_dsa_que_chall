class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        int one = 0, two=0;
        for(int i=0;i<n;i++){
           int current = max(two, one+nums[i]);
           one=two;
           two=current;
        }
        
        return max(one,two);
    }
};
