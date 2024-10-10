int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
    
        int cindex = 0;
        int sindex = 0;

        while (cindex < g.size() && sindex < s.size()) {
            if (s[sindex] >= g[cindex]) {
                cindex++;
            }
            sindex++;
        }

        return cindex;
    }
