class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return 0;
        unordered_map<char,int>m;
        unordered_map<char,int>n;

        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            n[t[i]]++;
        }
        for(int i=0;i<256;i++){
            if(m[i]-'0'!=n[i]-'0')return 0;
        }
        return 1;
    }
};