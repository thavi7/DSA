class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>v;
int n=a.size();
sort(a.begin(),a.end());
        for(int i=0;i<n-2;i++)
        {
            int x=-a[i];
            int st=i+1,end=n-1;
            while(st<end)
            {
                if(a[st]+a[end]==x){
                    v.push_back({a[i],a[st],a[end]});
                    st++,end--;
                }
                

                else if(a[st]+a[end]>x)end--;
                else st++;
            }
        }
          set<vector<int>> s(v.begin(), v.end());
    vector<vector<int>> uniqueV(s.begin(), s.end());

        return uniqueV;
    }
};