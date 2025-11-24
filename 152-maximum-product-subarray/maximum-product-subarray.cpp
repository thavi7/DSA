class Solution {
public:
    int maxProduct(vector<int>& a) {
        int c=INT_MIN, mul=INT_MIN;
int n=a.size();
if(n==1)return a[0];
        for(int i=0;i<n;i++)
        { mul=a[i];
         c=max(c,a[i]);
            for(int j=i+1;j<n;j++)
            {
                 mul*=a[j];
                c=max(c,mul);
            }

            
        }
        return c;
    }
};