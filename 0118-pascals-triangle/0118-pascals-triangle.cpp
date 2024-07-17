class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>p(n);
        for(int i=0;i<n;i++)
        {
            p[i].resize(i+1,1);
            for(int j=1;j<i;j++)
            {
                p[i][j]= p[i-1][j-1]+p[i-1][j];
            }
        }
        return p;
    }
};