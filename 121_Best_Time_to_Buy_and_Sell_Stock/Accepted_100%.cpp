class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int profit = 0;
        int end = prices.size();

        for(int i = 1; i<end; i++){
            if(prices[i] < min)
                min = prices[i];
            if(profit < (prices[i]-min))
                profit = prices[i]-min;
        }

        return profit;
    }
};
