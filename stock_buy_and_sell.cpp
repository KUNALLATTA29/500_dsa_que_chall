class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0, min_ending = prices[0];
        for(int i=1;i<prices.size();i++){
            min_ending = min(prices[i], min_ending);
            res = max(res,prices[i]- min_ending);
        }
        return res;
    }
};
