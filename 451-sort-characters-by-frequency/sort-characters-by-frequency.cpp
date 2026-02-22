class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        map<char,int>m;
        for(auto x :s)
        {
            m[x]++;
        }
        vector<pair<char,int>>p;
        for(auto x:m)
        {
            p.push_back({x.first,x.second});
        }
          sort(p.begin(), p.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
string t;
        for(auto x:p)   
        {
            t.append(x.second, x.first);
        }
        return t;
    }
};