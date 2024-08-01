class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<0) return 0;
        int i=0;int j =0;int maxi=0;
        vector<int>mp(256,-1);
        while(j<s.size())
        {
           if(mp[s[j]]!=-1)
           {
               i = max(mp[s[j]]+1,i);
           }
            mp[s[j]]=j;
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};