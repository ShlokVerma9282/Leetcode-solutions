#include <vector>
#include <algorithm>

class Solution {
public:
    int paintWalls(std::vector<int>& cost, std::vector<int>& time) {
        int n = cost.size(); 
        std::vector<int> dp(n + 1, 1e9); 
        dp[0] = 0; 

        
        for (int i = 0; i < n; ++i) {
            
            for (int j = n; j > 0; --j) {
                dp[j] = std::min(dp[j], dp[std::max(j - time[i] - 1, 0)] + cost[i]);
            }
        }
        return dp[n];
    }
};