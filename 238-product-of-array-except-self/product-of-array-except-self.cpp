class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int mul=1;
        int n=a.size();
        vector<int>ans(n);
        int c=0;
        for(int i=0;i<n;i++){
            mul*=a[i];
            if(a[i]==0)c++;
        }
        cout<<c;
    if(c>1)
    {
         for(int i=0;i<n;i++){
            ans[i]=0;
         }
    }
    else if(c==1)
    {
        mul=1;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                mul*=a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=0)ans[i]=0;
            else ans[i]=mul;
         }
    }
    else{
        for(int i=0;i<n;i++) ans[i]=(mul/a[i]);
    }


        return ans;
    }
};