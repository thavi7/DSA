class Solution {
public:
    static bool comp(pair<int, int>& x, pair<int, int>& y) {
        return x.second > y.second;
    }
    vector<int> topKFrequent(vector<int>& a, int k) {
        int n = a.size();
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[a[i]]++;
        }
        vector<pair<int, int>> v;
        for (auto& p : m) {
            v.push_back({p.first, p.second});
        }
        sort(v.begin(), v.end(), comp);
        vector<int> ans;
        for (auto x : v) {
            if (k == 0)
                break;
            ans.push_back(x.first);
            k--;
        }
        return ans;
    }
};