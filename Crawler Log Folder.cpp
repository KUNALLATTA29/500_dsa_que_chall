int minOperations(vector<string>& logs) {
         int i,n=0;
        for(i=0;i<logs.size();i++)
        {
            if(n<0)
        n=0;
            if(logs[i]=="../")
            {
                n--;
            }
            else if(logs[i]=="./")
            {
                continue;
            }
            else
            n++;
        }
        if(n<=0)
        n=0;
        return n;
    }
