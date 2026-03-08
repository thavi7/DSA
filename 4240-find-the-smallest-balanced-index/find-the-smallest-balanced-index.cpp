class Solution {
public:
    int smallestBalancedIndex(vector<int>& a) {
    
        int n=a.size();
        vector<long long>pre(n+1);
        vector<long long>suf(n+1);

        pre[0]=0;
        for(int i=1;i<=n;i++)
            {
                pre[i]=pre[i-1]+a[i-1];
                
            }
        
         suf[n]=1;
        for(int i=n-1;i>=0;i--)
            {
              
             if (suf[i+1] > LLONG_MAX / a[i]) 
                suf[i] = LLONG_MAX;   
            else
                suf[i] = suf[i+1] * a[i];
            }
        
      
        for(int i=0;i<n;i++)
            {
                if(pre[i]==suf[i+1]){
                    return i;
                }
            }


        
        return -1;
    }
};