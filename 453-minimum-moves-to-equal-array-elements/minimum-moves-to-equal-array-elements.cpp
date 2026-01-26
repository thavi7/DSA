class Solution {
public:
    int minMoves(vector<int>& a) {
        int n=a.size();
        int mn=*min_element(a.begin(),a.end());
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=a[i]-mn;
        }
        return c;
    }
};