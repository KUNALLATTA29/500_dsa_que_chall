int firstBadVersion(int n) {
        long long h=n,l=0,m;
        while(l<=h){
            m=(l+h)/2;
            int res = isBadVersion(m);
            if(res==1 && (m==0 or isBadVersion(m-1)!=1)){
                return m;
            }else if(res==0){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return m;
    }
