class Solution {
public:
    int hIndex(vector<int>& cit) {
        int n = cit.size();
        sort(cit.begin(),cit.end());
        if(cit[0]>=n)
        {
            return n;
        }
        if(n==1)
        {
            return !(cit[0]==0);
        }
        for(int i=0;i<n;i++)
        {
            int left = n-i;
            if(cit[i]>=left)
            {
                return left;
            }
        }
        return 0;
    }
};