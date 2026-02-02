class Solution {
public:
    string largestOddNumber(string s) {
       
       
int n=s.size(),idx=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='2' && s[i]!='4' && s[i]!='8' && s[i]!='0' &&s[i]!='6' )
            {
                idx=i;
                break;
            }
        }
        if(idx!=-1)
        {
            return s.substr(0, idx+1);
        }
        else{
            return "";
        }
    }
};