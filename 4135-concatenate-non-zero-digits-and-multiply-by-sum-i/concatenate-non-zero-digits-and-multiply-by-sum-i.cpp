class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string t;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0') t+=s[i];
        }
           if (t.empty()) return 0;
        long long x = stoi(t);
         long long sum = 0;
         long long w=x;

    while(w > 0) {
        sum += w % 10;  
        w /= 10;         
    }
    return sum*x;
    }
};