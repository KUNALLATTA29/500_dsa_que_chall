string toHex(int num) {
         if(num==0)return "0";
        long long int m=num;
        unordered_map<int,char>mp;
        int l=97;
        for(int i=0;i<16;i++){
            if(i>=0 && i<=9)mp[i]=i+'0';
            else{
                mp[i]=char(l);
                l++;
            }
        }
        if(num<0)m+=pow(2,32);
        string s;
        int a;
        while(m>0){
            a=m%16;
            s+=mp[a];
            m/=16;
        }
        string ans;
        for(int i=s.length()-1;i>=0;i--){
            ans+=s[i];
        }
        return ans;
    }
