class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>c(256,0);
        int fir=0,sec=0,l=0;
        while(sec<s.size())
        {
            while(c[s[sec]])
            {
                c[s[fir]]=0;
                fir++;
            }
            c[s[sec]]=1;
            l=max(l,sec-fir+1);
            sec++;
        }
        return l;
    }
};