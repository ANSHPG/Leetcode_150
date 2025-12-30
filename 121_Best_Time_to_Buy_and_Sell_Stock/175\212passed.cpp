class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int end = prices.size();
        int max = prices[end-1];

        for(int i = 0; i<end; i++){
            if(i>0)
                if(prices[i] > prices[i-1])
                    if(min > prices[i-1])
                        min = prices[i-1];

            if(i<end-1)
                if(prices[i] < prices[i+1])
                    if(max < prices[i+1])
                        max = prices[i+1];
        }

        if(min >= max)
            return 0;
        else
            return max - min;
    }
};
