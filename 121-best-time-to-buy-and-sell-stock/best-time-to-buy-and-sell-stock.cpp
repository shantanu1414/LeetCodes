class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price=prices[0];
        int max_profit=0;

        for(int x=1;x<prices.size();x++)
        {
            if(prices[x]<buy_price)
            {
                buy_price=prices[x];
            }
            else
            {
                int current_profit=prices[x]-buy_price;
                max_profit=max(max_profit,current_profit);
            }
        }
        return max_profit;
    }
};