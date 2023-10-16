class Solution {
public:
    vector<int> getRow(int row) {
        vector<vector<int>> ans(row+1);
        vector<int> output;
        output.push_back(1);
        if(row==0)
        {
            return output;
        }
        for(int i=0;i<row+1;i++)
        {
            ans[i].resize(i+1,1);
            for(int j=1;j<i;j++)
            {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                if(i==row)
                {
                    output.push_back(ans[i][j]);
                }
            }
        }
        output.push_back(1);
        return output;
    }
};