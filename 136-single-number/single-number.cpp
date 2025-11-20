class Solution {
public:
    int singleNumber(vector<int>& a) {
  
        unordered_map<int,int>m;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]++;
        }
        for(auto &p :m)
        {
            if(p.second==1)return p.first;
        }
        return -1;
    }
};