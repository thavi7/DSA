#define ll long long int
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int mul=1;
        int n=a.size();
        vector<int>ans;
        vector<int>pre(n+1);
        pre[0]=1;
        vector<int>suf(n+1);
        suf[n]=1;
        for(int i=1;i<=n;i++) pre[i]=a[i-1]*pre[i-1];
        for(int i=n-1;i>=0 ;i--) suf[i]=a[i]*suf[i+1];

        for(auto x:suf)cout<<x<<" ";

        for(int i=1;i<n+1;i++)
        {
            ans.push_back(pre[i-1]*suf[i]);
        }


        return ans;
    }
};