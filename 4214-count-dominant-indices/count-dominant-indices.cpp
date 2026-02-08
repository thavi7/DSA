class Solution {
public:
    int dominantIndices(vector<int>& a) {
        int n=a.size();
        int x=n;
    int ans=0;
        double c=0;
        for(int i=0;i<n-1;i++)
        {
            x--;
            for(int j=i+1;j<n;j++)
            {
                c+=a[j];
            }
            c/=x;
         
            if(a[i]>c)ans++;
            c=0;
        }
        return ans;
    }
};