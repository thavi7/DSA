class Solution {
public:
    int minOperations(vector<int>& a, int k) {
        int n=a.size();
       int x= accumulate(a.begin(),a.end(),0);
        
        return x%k;
    }
};