class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            int a = nums2[i];
            nums1.push_back(a);
        }
        sort(nums1.begin(),nums1.end());
        double ans = 0;
        if(nums1.size()%2==0){
            double x  = nums1[nums1.size()/2];
            double y  = nums1[(nums1.size()/2)-1];
            ans = (x+y)/2; 
        }
        else{
            ans = nums1[nums1.size()/2];
        }
        return ans;
    }
};