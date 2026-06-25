class Solution {
public:
    int c(vector<int>& a, int i, int n,vector<int>&dp) {
        if (i == n)
            return 0;
if(dp[i]!=-1)return dp[i];
        int take = 0, non = 0;
        if (i + 1 < n)
            take = c(a, i + 1, n,dp);
        if (i + 2 < n)
            non = c(a, i + 2, n,dp) ;

        return dp[i]=a[i]+min(take, non);
    }
    int minCostClimbingStairs(vector<int>& a) {
        int n = a.size();
        vector<int>dp(n+1,-1);
        return min(c(a, 0, n,dp), c(a, 1, n,dp));
    }
};