class Solution {
public:
    int shipWithinDays(vector<int>& a, int k) {
        int n=a.size();
        if(k>n){
            return -1;
            
        }
        int st=*max_element(a.begin(),a.end());
        int end= accumulate(a.begin(), a.end(), 0);
        
        int mid=0,ans=0;
        while(st<=end)
        {
            int sum=0, c=1;
             mid=st+(end-st)/2;
            for(int i=0;i<n;i++)
            {
                sum+=a[i];
                if(sum>mid)
                {
                    c++;
                    sum=a[i];
                }
            }
            if(c>k)st=mid+1;
            
            else {ans=mid,end=mid-1;}
        }
        return ans;
    }
};