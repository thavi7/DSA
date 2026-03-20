class Solution {
public:
    vector<vector<int>> subsets(vector<int>& a) {
        vector<vector<int>>x;
        int n=a.size(), sub=1<<n;

        for(int ii=0;ii<sub;ii++)
        {
            vector<int>y;
            for(int i=0;i<n;i++)
            {
                if(ii&(1<<i))
                {
                    y.push_back(a[i]);
                }
            }
            x.push_back(y);
        }
        return x;
    }
};