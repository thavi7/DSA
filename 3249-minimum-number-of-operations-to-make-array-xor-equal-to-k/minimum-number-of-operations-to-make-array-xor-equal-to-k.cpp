class Solution {
public:
    int minOperations(vector<int>& a, int k) {
        int n=a.size();
        int x=0;
        for(int i=0;i<n;i++)
        {
            x^=a[i];
        }
    x^=k;
    int c=0;
    while(x)
    {
        c+=(x&1);
        x>>=1;
    }
return c;
    }
};