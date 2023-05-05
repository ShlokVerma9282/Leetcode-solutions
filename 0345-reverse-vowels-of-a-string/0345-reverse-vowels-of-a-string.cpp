class Solution {
public:
    bool isvowel(char d)
{
    char c = tolower(d);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        return true;
    }
    return false;
}
string reverseVowels(string s) {
        for(int i=0,j=s.size()-1;i<j;i++,j--)
        {
            while(i<j && isvowel(s[i])==0)
                i++;
            while(i<j && isvowel(s[j])==0)
                j--;
            if(i<j)
                swap(s[i],s[j]);
        }
            return s;
}
    
};