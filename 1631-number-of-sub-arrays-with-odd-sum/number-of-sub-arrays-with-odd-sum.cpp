class Solution {
public:
// count of odd shpuld be odd and ev+odd=odd
    int numOfSubarrays(vector<int>& a) {
        int MOD= 1000000007;
        int ans=0, n= a.size() , c=0, od=0,ev=1;
        vector<int>pre(n);
        pre[0]=a[0];

       for(int i=1;i<n;i++) pre[i]=pre[i-1]+a[i];
       
       for(int i=0;i<n;i++)
       {
        if(pre[i]%2==1)  // odd
         {
            c = (c + ev) % MOD;
            od++;
         }
         else{
            c = (c + od) % MOD; ev++;
         }
       }
      return c;
        
    }
};