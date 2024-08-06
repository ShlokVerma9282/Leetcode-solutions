class Solution {
public:
    void helper(int i,vector<int>& can, int target,vector<vector<int>> &ans,vector<int>&ds)
    {
        if(i==can.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(can[i]<=target)
        {
            ds.push_back(can[i]);
            helper(i,can,target-can[i],ans,ds);
            ds.pop_back();
        }
        helper(i+1,can,target,ans,ds);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        helper(0,candidates,target,ans,ds);
        return ans;
    }
};