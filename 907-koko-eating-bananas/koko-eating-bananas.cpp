class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int n=a.size();
        int st=1,end=*max_element(a.begin(),a.end());
        long long ans=0;
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