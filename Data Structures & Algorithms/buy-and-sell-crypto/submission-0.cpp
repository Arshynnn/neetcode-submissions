class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int mx = 0;

        for (int i = 1; i < prices.size(); ++i) {
            int sum = prices[i] - mn;
            mx = max(mx, sum);
            mn = min(mn, prices[i]);
        }

        return mx;
    }
};
