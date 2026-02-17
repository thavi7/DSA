class Solution {
public:
    int firstUniqueFreq(vector<int>& a) {
        map<int,int>m,fre;
        int n=a.size();
        for(int i=0;i<n;i++) m[a[i]]++;
       
        for(auto &x :m) fre[x.second]++;
        
        for(auto &x :a) if(fre[m[x]]==1)return x;

        return -1;
    }
};