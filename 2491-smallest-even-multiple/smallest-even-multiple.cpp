class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans=0;
        for(int i=1;i<=1500;i++)
        {
            if(i%n==0 && i%2==0)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};