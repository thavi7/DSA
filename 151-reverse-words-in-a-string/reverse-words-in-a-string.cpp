class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int l=n-1,r=n-1;
        string t;
        while(r>=0)
        {
            if(s[r]==' ')
            {
                 if (l != r) { 
                    if (!t.empty()) t += " ";
                    t += s.substr(r + 1, l - r); 
                }
                r--;
                l=r;
            }
            else{
                r--;
            }
            
        }
       if (l != r) { 
                    if (!t.empty()) t += " ";
                    t += s.substr(r + 1, l - r); 
                }
                
        return t;
    }
};