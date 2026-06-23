class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], sell = 0, profit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (buy > prices[i]) {
                buy = prices[i];
                sell = 0;
            }
            if (sell < prices[i]) {
                sell = prices[i];
                profit = max(profit, sell - buy);
            }
        }

        return profit;
    }
};
