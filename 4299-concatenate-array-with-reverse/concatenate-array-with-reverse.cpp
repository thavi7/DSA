class Solution {
public:
    vector<int> concatWithReverse(vector<int>& a) {
        int n=a.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(a[i]);
        }
        for(int i=n-1;i>=0;i--){
            ans.push_back(a[i]);
        }
        return ans;
    }
};