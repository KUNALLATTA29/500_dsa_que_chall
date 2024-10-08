 int guessNumber(int n) {
        long long h=n,l=0,m;
        while(l<=h){
            m=(h+l)/2;
            int res = guess(m);
            if(res==-1){
                h=m-1;
            }else if(res==1){
                l=m+1;
            }else{
                return m;
            }
        }
        return m;
    }
