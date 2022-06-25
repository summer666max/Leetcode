#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        int dp[100][3];
        memset(dp, 0, sizeof(dp) / sizeof(int));
        int n = costs.size();
        dp[0][0] = costs[0][0];
        dp[0][1] = costs[0][1];
        dp[0][2] = costs[0][2];
        for(int i = 1; i < n; ++i)
        {
            dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + costs[i][0];
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + costs[i][1];
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + costs[i][2];
        }
        int temp = min(dp[n - 1][0], dp[n - 1][1]);
        return min(temp, dp[n - 1][2]);
    }
};

