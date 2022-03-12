class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = 1e5;
        int minDay;
        
        for(int i=0; i<prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
                minDay = i;
            }
        }
        
        for(int i=minDay; i<prices.size(); i++) {
            if(prices[i] > max) {
                max = prices[i];
            }
        }
        
        int profit = max-min;
        if(profit>0) {
            return profit;
        }
        return 0;
	}
};

