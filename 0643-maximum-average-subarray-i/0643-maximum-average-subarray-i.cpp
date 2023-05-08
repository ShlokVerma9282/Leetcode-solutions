class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     int i;
        double sum=0, max_avg=INT_MIN;
        for(i=0 ; i<k ; i++)
        {
            sum += nums[i];
        }
        max_avg = sum/k;
        for(i=1 ; i<=nums.size()-k ; i++)
        {
            sum += nums[i+k-1]-nums[i-1];
            if(sum/k>max_avg)
            {
                max_avg = sum/k;
            }
        }
        return max_avg;
    }
};