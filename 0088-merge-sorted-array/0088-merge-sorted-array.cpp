class Solution {
public:
    void swapG(vector<int>& nums1, vector<int>& nums2,int n, int m){
        if(nums1[n]>nums2[m]){
                   swap(nums1[n],nums2[m]);
        }
    }
    void mp(vector<int>& nums1, int n,  int m) {
        int len =n+m;
        int gap = (len/2)+(len%2);
        
        while(gap>0)
        {
            int left = 0;
            int right =left+gap;
            while(right<len)
            {
                if(left<n&&right>=n)
                {
                    swapG(nums1,nums1,left,right);
                }
                else if(left>=n)
                {
                    swapG(nums1,nums1,left,right);
                }
                else
                {
                    swapG(nums1,nums1,left,right);
                }
                left++,right++;
            }
            if(gap==1){
                break;
            }
            gap = (gap/2)+(gap%2);
        }
    }
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m)
    {
        for(int i=0;i<m;i++)
        {
            swap(nums1[i+n],nums2[i]);
        }
         mp(nums1,n,m);
    }
};