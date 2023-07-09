class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        n/=2;
        for(auto x:mp){
            if(x.second>n)
            {
                return x.first;
            }
        }
        return 0;
    }
};