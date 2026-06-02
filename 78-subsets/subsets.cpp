class Solution {
public:
    void subseq(vector<int>& a, int i, int n, vector<int>temp, vector<vector<int>>& ans) {

        if (i == n) {
            ans.push_back(temp);
            return;
        }

        subseq(a, i + 1, n, temp, ans); // not take

        temp.push_back(a[i]); // take
        subseq(a, i + 1, n, temp, ans);
    }

    vector<vector<int>> subsets(vector<int>& a) {
        int n = a.size();
        vector<vector<int>> ans;
        vector<int> temp;
         subseq(a, 0, n, temp, ans);
         return ans;
    }
};