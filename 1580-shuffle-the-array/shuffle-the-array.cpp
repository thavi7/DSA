class Solution {
public:
    vector<int> shuffle(vector<int>& a, int n) {
        vector<int>c;
        int i=0,j=n;
        while(i<n && j<2*n)
        {
            c.push_back(a[i]);
            c.push_back(a[j]);
            i++,j++;
        }
        return c;
    }
};