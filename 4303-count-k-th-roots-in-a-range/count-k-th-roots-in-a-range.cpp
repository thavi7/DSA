class Solution {
public:
    long long intPower(int x, int k) {
        long long res = 1;
        for (int i = 1; i <= k; i++) {
            res = res * x;
        }
        return res;
    }

    int countKthRoots(int l, int r, int k) {
        if (k == 1)
            return r - l + 1;

        long long c = 0;
        for (long long i = 0; i <= r; i++) {
            long long y = intPower(i, k);
            if (y >= l && y <= r)
                c++;

            if(y>r)break;
        }
        return c;
    }
};