class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n =arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++)
        {
            if(ans.empty()||ans.back()[1]<arr[i][0])
            {
                ans.push_back(arr[i]);
            }
            else 
            {
                if(arr[i][1]>ans.back()[1]){
                swap(ans.back()[1],arr[i][1]);
                }
            }
        }
        return ans;
    }
};