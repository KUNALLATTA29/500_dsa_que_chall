int largestCombination(vector<int>& candidates) {
        vector<int> bits(32);

        for(int i : candidates){
            int sh = 0;
            while(sh < 32){
                bits[sh++] += (i >> sh) & 1;
            }
        }

        return *max_element(bits.begin() , bits.end());
    }
