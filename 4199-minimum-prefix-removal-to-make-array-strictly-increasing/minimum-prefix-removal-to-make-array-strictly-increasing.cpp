class Solution {
public:
    int minimumPrefixLength(vector<int>& a) {
        int c=0;
        int n=a.size();
        for(int i=n-1;i>0;i--)
        {
           if(a[i]<=a[i-1])
           {
            c=i;
            break;
           }
        }
        return c;
    }
};