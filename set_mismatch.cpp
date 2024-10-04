vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++; 
        }
        vector<int>result;
        for(auto num:freq){
            if(num.second==2){
                result.push_back(num.first);
            }
        }
        for(int i=1;i<=n;i++){
            if(freq.find(i)==freq.end()){
                result.push_back(i);
            }
        }
        return result;
    }
