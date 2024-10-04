int sumOfSquares(vector<int>& nums) {
        int result=0;
        int n=nums.size();
        
        for(int i=1;i<=n;i++){            
            if(n%i==0){
                int k = nums[i-1];
                k*=k;
                result+=(k);
            }
        }
        
        return result;
    }
