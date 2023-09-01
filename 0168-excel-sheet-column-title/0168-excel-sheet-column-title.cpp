class Solution {
public:
    string convertToTitle(int coln) {
        string ans;
        while(coln>0){
            coln--;
            int m = coln%26;
            coln/=26;
            ans+='A'+m;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};