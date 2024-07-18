class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int c =0;
        int ele =nums[0];
        for(int i=0;i<n;i++)
        {
            if(ele==nums[i])
            {
                c++;
            }
            else
            {
                c--;
                if(c==0)
                {
                    ele = nums[i];
                    c=1;
                }
            }
        }
        return ele;
        
    }
};