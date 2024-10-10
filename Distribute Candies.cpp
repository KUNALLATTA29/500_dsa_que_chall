int distributeCandies(vector<int>& candyType) {
        set<int> ans(candyType.begin(),candyType.end());
        int n = candyType.size();
        return min(static_cast<int>(ans.size()),n/2);
    }
