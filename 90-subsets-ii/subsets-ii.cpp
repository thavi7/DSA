class Solution {
public:
void subseq(vector<int>& a, int i, int n, vector<int>temp, set<vector<int>>&s) {

        if (i == n) {
            s.insert(temp);
            return;
        }

        subseq(a, i + 1, n, temp, s);

        temp.push_back(a[i]); 
        subseq(a, i + 1, n, temp, s);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>>s;
         subseq(a, 0, n, temp, s);
        for(auto x:s){
            ans.push_back(x);
        }
         return ans;
    }
};