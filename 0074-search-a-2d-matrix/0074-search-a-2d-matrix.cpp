class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int rows = mat.size();
        int cols = mat[0].size()-1;
        int row=0;
        while(row<rows && cols>-1)
        {
            int curr = mat[row][cols];
            if(curr==t)
            {
                return true;
            }
            if(curr<t)
            {
                row++;
            }
            else{
                cols--;
            }
        }
        return false;
    }
};