 int sumOddLengthSubarrays(vector<int>& arr) {
        int result = 0;
        for(int s=0;s<arr.size();s++){
            for(int e=s;e<arr.size();e++){
                if((e-s+1)%2!=0){
                    for(int k = s;k<=e;k++){
                        result+=arr[k];
                    }
                }
            }
        }
        return result;
    }
