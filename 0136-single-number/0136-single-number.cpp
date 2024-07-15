class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = nums[0];
        if(nums.size()==1)
        {
            return a;
        }
        for(int i=1;i<nums.size();i++)
        {
            int b = nums[i];
            a = a^b;
        }
        return a;
    }
};