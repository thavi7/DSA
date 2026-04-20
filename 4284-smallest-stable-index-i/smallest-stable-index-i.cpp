class Solution {
public:
    int firstStableIndex(vector<int>& a, int k) {
        int n=a.size();
        vector<int>pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=max(a[i],pre[i-1]);
        }
        vector<int>suf(n);
        suf[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=min(a[i],suf[i+1]);
        }
        // for(auto x:pre)cout<<x<<" ";
        // cout<<endl;
        // for(auto x:suf)cout<<x<<" ";
        // cout<<endl;
        // return -1;
        int c=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(pre[i]-suf[i]<=k){
                c=min(c,i);
            }
        }
        if(c==INT_MAX)return -1;
        else return c;
    }
};