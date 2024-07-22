class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int minPrice = INT_MAX;
        int MaxPro = 0;

        for(int i =0;i<prices.size();i++)
        {
            minPrice= min(minPrice,prices[i]);
            MaxPro = max(MaxPro, prices[i]-minPrice);
        }
        return MaxPro;
    }
};