class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int slow = a[0];
        int fast = a[0];
        slow = a[slow];
        fast = a[a[fast]];
        while (slow != fast) {
            slow = a[slow];
            fast = a[a[fast]];
          };
        fast = a[0];
        while(slow!=fast)
        {
            slow = a[slow];
            fast = a[fast];
        }
        return slow;
    }
};