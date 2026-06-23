class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minprice = INT_MAX;
        int maxprofit = 0;
        for(int price : prices){
            if(price < minprice)
            {
            minprice = price;
             }
                maxprofit = max(maxprofit, price - minprice );
            }
        return maxprofit; 
    }
};