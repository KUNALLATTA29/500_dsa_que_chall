string makeFancyString(string s) {
        string ans ="";
        int cnt =1;
        ans += s[0];
        for(int i=1;i<s.size();i++){
            if(s[i-1] == s[i])cnt++;
            else cnt=1;

            if(cnt<3){
                ans+=s[i];
            }
        }
        return ans;
    }
