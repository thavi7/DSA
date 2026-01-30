class Solution {
public:
    string largestEven(string s) {
        int n=s.size();
        string a;
        int idx=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='2')
            {
                idx=i;
                break;
            }
        }
       if(idx==-1)
       {
        return "";
       }
       else{
         for(int i=0;i<=idx;i++)
        {
            a.push_back(s[i]);
        }
       }
       return a;
    }
};