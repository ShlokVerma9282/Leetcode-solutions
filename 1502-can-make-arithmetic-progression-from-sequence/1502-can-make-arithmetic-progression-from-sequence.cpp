class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        if(nums.size()<3) return true;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i+1]-nums[i]==nums[i+2]-nums[i+1])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};