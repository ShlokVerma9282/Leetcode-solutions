class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map <int,int>mp;
        mp[0]+=1;
        int preSum =0;
        int cnt=0;
        for (int i = 0; i < n; i++) {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mp[remove];

        // Update the count of prefix sum
        // in the map.
        mp[preSum] += 1;
    }
    return cnt;
    }
};