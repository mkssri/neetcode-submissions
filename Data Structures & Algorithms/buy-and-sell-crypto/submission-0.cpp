class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int curr_profit, max_profit = 0;

        int i = 0, length = prices.size();

        for (i = 0; i < length-1; i++) {
            int buy_price = prices[i];
            int curr = i+1;
            
            while(curr < length) {

                curr_profit = prices[curr] - buy_price;
                max_profit = max(max_profit, curr_profit);

                curr += 1;
            }

        }

        return max_profit;
    }
};
