class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        int temp_sum =0;
        for(int i =0;i<accounts.size();i++)
        {
        temp_sum =0;
            for(int j =0;j<accounts[i].size();j++)
            {
                 temp_sum += accounts[i][j];
            }
            max_wealth = max(temp_sum, max_wealth);
        }
        return max_wealth;
    }
};