class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minim = INT_MAX;
        int profit;
        int maxim = INT_MIN;
        
        for (int i = 0 ; i < prices.size(); i++){

            minim = min(minim,prices[i]);
            profit = prices[i] - minim;
            maxim = max(maxim,profit);

        }
    
        return maxim;
    }
};
