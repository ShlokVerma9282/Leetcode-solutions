class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0;
        int maxi = INT_MIN;
        int mini = INT_MIN;
        bool z =0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            ans+=nums[i];
            maxi = max(maxi,ans);
            if(ans<0)
            {
                ans=0;
            }
            if(nums[i]>0)
            {
                z=1;
            }
            if(nums[i]<=0)
            {
                mini = max(mini,nums[i]);
            }
            
        }
        if(z=1)
        {
            return maxi;
        }
        else
            return mini;
        
    }
};