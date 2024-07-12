class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int ans = 0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==1)
            {
                count++;
                ans = max(ans,count);
            }
            if(arr[i]==0)
            {
                count=0;
            }
        }
        return ans;
    }
};