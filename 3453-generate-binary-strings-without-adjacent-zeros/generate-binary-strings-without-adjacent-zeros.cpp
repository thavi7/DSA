class Solution {
public:
    void c(vector<string>& ans, string& s, int n, int i) {
        if (i == n) {
            ans.push_back(s);
            return;
        }
        s[i] = '0';
        c(ans, s, n, i + 1);
        s[i] = '1';
        c(ans, s, n, i + 1);
    }
    vector<string> validStrings(int n) {
        vector<string> x;
        string s(n, '0');
        c(x, s, n, 0);

        vector<string> ans;

        for (auto& t : x) {
            if (!t.contains("00"))
                ans.push_back(t);
        }

        return ans;
    }
};