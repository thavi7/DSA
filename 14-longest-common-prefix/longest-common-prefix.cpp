class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string t=s[0];
        int n=s.size();
        int mn=t.size();
        int x=0;
        for(int i=1;i<n;i++)
        {
             x=0;
             string y=s[i];
           int j=0;
           while(j < y.size() && j < t.size() && y[j] == t[j]){x++,j++;}
         mn=min(mn,x);
        }
        string y;
        for(int i=0;i<mn;i++)
        {
            y+=t[i];
        }
        return y;
    }
};