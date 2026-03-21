class Solution {
public:
    int subsetXORSum(vector<int>& a) {
        int n=a.size();
        int sum=0,x=0;
        for(int i=0;i<(1 << n);i++)
        {
            x=0;
            for(int j=0;j<n;j++)
            {
                if(i & (1 << j)) {
                    x ^= a[j];
                }
            }
            cout<<x<<" ";
            sum+=x;
        }
        return sum;
    }
};