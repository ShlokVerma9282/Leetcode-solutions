class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int b= prices[0];
        int maxi =0;
        for(int i=1;i<n;i++)
        {
            maxi = max(maxi,prices[i]-b);
            b = min(b,prices[i]);
        }
        return maxi;
    }
};