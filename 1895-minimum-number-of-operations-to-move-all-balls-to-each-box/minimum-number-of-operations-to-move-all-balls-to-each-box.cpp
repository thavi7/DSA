class Solution {
public:
    vector<int> minOperations(string s) {
        int n=s.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(s[j]=='1'){c+=abs(j-i);}
            }
            ans.push_back(c);
        }
        return ans;
    }
};