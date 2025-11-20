class Solution {
public:
    int majorityElement(vector<int>& a) {
         unordered_map<int,int>m;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]++;
        }
        for(auto &p :m)
        {
            if(p.second>(a.size()/2))return p.first;
        }
        return -1;
    }
};