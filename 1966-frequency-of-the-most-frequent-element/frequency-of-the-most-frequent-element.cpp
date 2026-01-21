class Solution {
public:
    int maxFrequency(vector<int>& a, int k) {
        int n=a.size();
        sort(a.begin(),a.end());
      int l=0,r=0;
long long sum=0;
int mx=0;
      while(l<n && r<n)
      {
        sum+=a[r];
        if(1LL * a[r]*(r-l+1)>sum+k)
        {
            sum-=a[l];
            l++;
        }
        mx=max(r-l+1,mx);
       r++;
      }
      return mx;
    }
};