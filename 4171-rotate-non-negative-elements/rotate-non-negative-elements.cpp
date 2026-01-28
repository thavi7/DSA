class Solution {
public:
    vector<int> rotateElements(vector<int>& a, int k) {
        int n = a.size();

        vector<int> b;
        for (int i = 0; i < n; i++) {
            if (a[i] >= 0) {
                b.push_back(a[i]);
            }
        }
        if(b.size()==0)
        {
            return a;
        }
        k %= b.size();
        rotate(b.begin(), b.begin() + k, b.end());
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= 0) {
                a[i] = b[j];
                j++;
            }
            if(j==b.size())break;
        }
        return a;
    }
};