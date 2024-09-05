string balancedSums(vector<int> arr) {
    int total = 0;
    int leftsum = 0;
    for(auto it:arr){
        total+=it;
    }
    for(int i=0;i<arr.size();i++){
        if(leftsum==total-leftsum-arr[i]){
            return "YES";
        }
        leftsum+=arr[i];
    }
    return "NO";
}
