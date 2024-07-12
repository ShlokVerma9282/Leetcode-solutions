class Solution {
public:
    bool check(vector<int>& arr) {
        int n =arr.size();
        if(n<3&&n>-1)
        {
            return true;
        }
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1])
            {
                reverse(arr.begin(),arr.end());
                reverse(arr.begin(),arr.begin()+n-i);
                reverse(arr.begin()+n-i,arr.end());
                break;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            
            if(arr[i]>arr[i+1])
            {
                return false;
            }
        }
        return true;
    
        
    }
};