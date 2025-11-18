class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        int n=a.size();

        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }

        vector<pair<int,int>> v;
    for (auto &p : m) {
        v.push_back({p.first, p.second});
    }

    sort(v.begin(), v.end(), [](auto &x, auto &y){
        return x.second > y.second;
    });
    vector<int>s;
        for(int i=0;i<k;i++)
        {
           s.push_back(v[i].first);
        }
return s;

    }
};