class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        unordered_map<int,int>x;
        unordered_map<int,int>y;
        for(int i=0;i<n;i++)
        {
            if(x[s[i]]!=y[t[i]])return 0;

            x[s[i]]=i+1;
            y[t[i]]=i+1;
        }
        return 1;
    }
};