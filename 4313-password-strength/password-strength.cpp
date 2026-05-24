class Solution {
public:
    int passwordStrength(string s) {
        int n = s.size();
        set<char> st;
        int c = 0;
        for (auto x : s){
    
            st.insert(x);
        }

        for (auto x : st) {
            cout<<x;
            if (x >= 'a' && x <= 'z')
                c += 1;
            else if (x >= 'A' && x <= 'Z')
                c += 2;
            else if (x >= '0' && x <= '9')
                c += 3;
            else
                c += 5;
        }
        return c;
    }
};