int minChanges(string s) {
         int i=0;
        int count=0;
        while(i<s.size()-1) {
            if(s[i] != s[i+1])
                count++;
            i+=2;
        }
        return count;
    }
