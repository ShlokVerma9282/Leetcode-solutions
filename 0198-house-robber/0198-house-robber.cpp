class Solution {
public:
    int ans(vector<int>& arr,vector<int>& dp,int n){
        dp[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            int pick = arr[i];
            if(i>1)
                pick+=dp[i-2];
            int notpick = dp[i-1];
            dp[i] = max(pick,notpick);
        }
        return dp[n-1];
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        return ans(nums,dp,n);
    }
};