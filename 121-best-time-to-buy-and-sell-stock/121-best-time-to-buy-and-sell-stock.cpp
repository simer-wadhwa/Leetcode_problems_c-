class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int m=INT_MIN, min_index=INT_MAX;
        int profit=0;
        
        for(int j=0;j<prices.size();j++)
        {
          min_index=min(min_index,prices[j]);
          profit=prices[j]- min_index;
           m=max(m,profit);
          
        
         }
        return m;
    }
};