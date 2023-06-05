class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()<2) return true;
        sort(c.begin(),c.end());
        double slope =  double(c[1][1]-c[0][1])/(double)(c[1][0]-c[0][0]);
        for(int i =1;i<c.size()-1;i++)
        { 
            double temp =  double(c[i+1][1]-c[i][1])/(double)(c[i+1][0]-c[i][0]);
            if(abs(slope)!=abs(temp))
            {
                return false;
            }
        }
        return true;
    }
};