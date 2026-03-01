class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int n=a.size();
        long long st=(accumulate(a.begin(), a.end(), 0LL))/h,end=*max_element(a.begin(),a.end());
        long long ans=0;
        if(st==0)st=1;
        while(st<=end)
        {
            int mid=st+((end-st)/2);
             long long c=0;
             for(int i=0;i<n;i++)
             {
                c+=(a[i]+mid-1)/mid;
             }              
             if(c<=h)
             {
                ans=mid;
                end=mid-1;
             }
             else st=mid+1;
        }
        return ans;
    }
};