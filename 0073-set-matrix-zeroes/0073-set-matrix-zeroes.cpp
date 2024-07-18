class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int>x(m,1);
        for(int i=0;i<n;i++)
        {
            bool u =false; 
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    u=true;
                    x[j]=0;
                    for(int k=0;k<j;k++)
                    {
                        mat[i][k]=0;
                    }
                }
                if(u==true)
                {
                    mat[i][j]=0;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            if(x[i]==0)
            {
                for(int j=0;j<n;j++)
                {
                    mat[j][i]=0;
                }
            }
        }
            
    }
};