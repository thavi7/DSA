class Solution {
public:
/*
 if we found x have how many odd len of subb arr(c) then we will just do ans+= x*c for all x...
 since at end we wll mull all of them
*/
    int sumOddLengthSubarrays(vector<int>& a) {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int l= i+1;
            int r=n-i;
            int total= l*r;
            int contri= (total+1)/2;

            ans+=a[i]*contri;
        }
        return ans;
    }
};