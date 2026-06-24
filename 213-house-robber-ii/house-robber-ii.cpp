class Solution {
public:
int c(vector<int>&a,int i,vector<int>&dp)
  {
      if(i<0)return 0;
      if(i==0)return a[0];
      
      if(dp[i]!=-1)return dp[i];
      //take

      int take= c(a,i-2,dp)+a[i];
      //not_take
      int not_take= c(a,i-1,dp);
      
      return dp[i]=max(take,not_take);
  }
  int d(vector<int>&a,int i,vector<int>&dp)
  {
      if(i<1)return 0;
      if(i==1)return a[1];
      
      if(dp[i]!=-1)return dp[i];
      //take

      int take= d(a,i-2,dp)+a[i];
      //not_take
      int not_take= d(a,i-1,dp);
      
      return dp[i]=max(take,not_take);
  }
    int rob(vector<int>& a) {
        int n=a.size();
        if(n==1)return a[0];
        vector<int>dp(n,-1);

         int f= c(a,n-2,dp);
         vector<int>dpp(n,-1);
         int s= d(a,n-1,dpp);
         return max(f,s);
    }
};