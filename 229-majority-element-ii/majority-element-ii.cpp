class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        map<int,int>m;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
vector<int>x;
        for (auto &p : m) {
            if(p.second>n/3)
            {
                x.push_back(p.first);
            }
        }
        return x;
    }
};