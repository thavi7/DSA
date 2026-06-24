class Solution {
public:
    int rob(vector<int>& a) {
         int n=a.size();
         if(n==1)return a[0];
        vector<int>dp(n,-1);
        dp[0]=a[0];
        dp[1] = max(a[0], a[1]);
        int take=0,not_take=0;
        for(int i=2;i<n;i++)
        {
            take= dp[i-2]+a[i];
            not_take= dp[i-1];
            dp[i]=max(take,not_take);
        }
        return dp[n-1];
    }
    
};