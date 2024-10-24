 double average(vector<int>& salary) {
        int temp,sum=0;
        int n = salary.size();
        double avg;
        if(n==0)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(salary[j]>salary[j+1])
                {
                    temp=salary[j+1];
                    salary[j+1]=salary[j];
                    salary[j]=temp;
                }
            }
        }
        for(int i=1;i<n-1;i++)
        {
            sum=sum+salary[i];
        }
        avg=(double)sum/(n-2);
        return avg;
    }
