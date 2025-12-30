class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;

        int end = prices.size();
        for(int i = 0; i<end; i++){
            int buy = prices[i];
            for(int j = i+1; j<end; j++){
                if(max < (prices[j]-buy))
                    max = prices[j] - buy;
            }
        }

        return max;
    }
};
