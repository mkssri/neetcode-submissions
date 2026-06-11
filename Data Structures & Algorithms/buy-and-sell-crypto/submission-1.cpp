class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int l = 0, max_profit = 0;
        int r = l + 1;

        while (r < prices.size()) {
            if (prices[l] < prices[r])
                max_profit = max(max_profit, (prices[r] - prices[l]));
            else
                l = r;
            r += 1;
        }

        return max_profit;
    }
};
