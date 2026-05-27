class Solution {
public:
    int minOperations(vector<int>& a) {
        int n = a.size();
        int gaps = (abs(a[0] - a[n - 1]) > 1);

        for (int i = n - 2; i >= 0 && gaps < 2; i--) {
            gaps += (abs(a[i] - a[i + 1]) > 1);
        }

        if (gaps > 1)
            return -1;

        int z = find(a.begin(), a.end(), 0) - a.begin();

        if (a[(z + 1) % n] > 1) {
            return min(z + 2, n - z);
        }

        return min(z, n - z + 2);
    }
};