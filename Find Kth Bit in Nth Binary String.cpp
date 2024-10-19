char findKthBit(int n, int k) {
        int cnt = 0;
        while(k!=1)
        {
            if(!(k & (k-1)))
            {
                if(cnt%2==0)
                    return '1';
                else
                    return '0';
            }
            int p = (int)pow(2,(int)log2(k));
            k = p-(k-p);
            cnt++;
        }
        if(cnt%2==0)
            return '0';
        else
            return '1';
    }
