class Solution {
public:
    void c(string s, string &temp, int i, vector<string>& ans,
           vector<string>& mp) {

        if (i == s.size()) {
            ans.push_back(temp);
            return;
        }

        int n = s[i] - '0';
        string l = mp[n];
        for (char x : l) {
            temp.push_back(x);
            c(s, temp, i + 1, ans, mp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string n) {
        vector<string> ans;
        string temp;
        if (n.size() == 0)
            return ans;
        vector<string> mp = {"",    "",    "abc",  "def", "ghi",
                             "jkl", "mno", "pqrs", "tuv", "wxyz"};

        c(n, temp, 0, ans, mp);

        return ans;
    }
};