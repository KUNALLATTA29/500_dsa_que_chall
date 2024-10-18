 int countBinarySubstrings(string s) {
        int a[2] = {0};
        char curr = s[0];
        int sum = 0;
        for(char c: s){
            if(c == curr) {
                a[c - '0']++;
            }
            else {
                int k = min(a[0], a[1]);
                sum += k;
                curr = c;
                a[c-'0'] = 1;
            }
        }
        int k = min(a[0], a[1]);
        sum += k;
        return sum;
    }
