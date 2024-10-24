 int maxProduct(vector<int>& nums) {
         priority_queue<int> q; 
        for(int val: nums){
            q.push(val); 
        }
        int a = q.top(); q.pop(); 
        int b = q.top(); 
        return ((a-1)*(b-1));
    }
