class Solution {
public:
    vector<int> singleNumber(vector<int>& a) {
        long long n=a.size();
        sort(a.begin(),a.end());
        long long l=0,r=0,x=0;
        for(long long i=0;i<n;i++)
        {
            x^=a[i];
        }
      long long w= (x&(x-1)&x)^x;
      
      for(long long i=0;i<n;i++)
      {
        if(w&a[i])l^=a[i];
        else r^=a[i];
      }
     
      return {(int)l,(int)r};
    }
};