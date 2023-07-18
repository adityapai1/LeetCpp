class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min = *min_element(prices.begin(),prices.end());
        int m_inx;
        for(int i =0; i < prices.size();i++){
            if(prices[i]== min)
            {
                m_inx = i;
                break;
            }
        }

        if(m_inx == prices.size()-1){
            min = *min_element(prices.begin(), prices.end());
            for(int i =0; i < prices.size()-1;i++){
            if(prices[i]== min)
            {
                m_inx = i;
                break;
            }
        }
        }


        int maxim = min;

        for(int i = m_inx+1 ; i < prices.size();i++){
            maxim = max(maxim,prices[i]);
        }
        int profit = maxim-min;
    
        return profit;
    }
};
