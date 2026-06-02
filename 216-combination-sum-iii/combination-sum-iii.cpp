class Solution {
public:
    void c(vector<vector<int>>& ans, vector<int>& temp, int k,int n, int i) {
        if(i>9){
            if(k==0 && temp.size()==n){
                ans.push_back(temp);
            }
            return;
        }
        if(temp.size()>n)return;


        temp.push_back(i);
        c(ans, temp, k-i, n, i+1);

        temp.pop_back();
        c(ans, temp, k, n, i+1);
    }

    vector<vector<int>> combinationSum3(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        c(ans, temp, k, n, 1);
        sort(ans.begin(), ans.end());
        return ans;
    }
};