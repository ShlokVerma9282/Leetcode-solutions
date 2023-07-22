class Solution {
public:
    int coinChange(vector<int>& c, int amnt) {
        vector<int>dp(amnt+1,INT_MAX);
        dp[0]=0;
        sort(c.begin(),c.end(),greater<>());
        for(int i=1;i<=amnt;i++)
        {
            for(int j=0;j<c.size();j++)
            {
                if(i>=c[j])
                {
                    int s = dp[i-c[j]];
                    if(s!=INT_MAX)
                    {
                        dp[i]=min(dp[i],s+1);
                    }
                }
            }
        }
        if(dp[amnt]!=INT_MAX)
        {
            return dp[amnt];
        }
        return -1;
    }
};