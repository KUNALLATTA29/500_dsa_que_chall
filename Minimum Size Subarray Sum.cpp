int minSubArrayLen(int target, vector<int>& nums) {
     int result=INT_MAX;
     int sum=0;
     int start=0,end=0;
     int n=nums.size();
     while(end<n){
        sum+=nums[end];
        while(sum>=target){
            result=min(result,end-start+1);
            sum-=nums[start];
            start++;
        }
        end++;
     }   
     if(result==INT_MAX) return 0;
    return result;
    }
