class Solution {
public:
    double average(vector<int>& salary) {
        double ans =0;
        if(salary.size()<3)
        {
            return ans;
        }
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++)
        {
            ans+=salary[i];
        }
        ans/=salary.size()-2;
        return ans;
    }
};