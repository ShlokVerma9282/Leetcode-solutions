class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        long ori = x;
        while(x>0)
        {
            int d = x%10;
            rev=rev*10+d;
            x/=10;
        }
        if(ori==rev)
        {
            return true;
        }
        return false;
            
    }
};