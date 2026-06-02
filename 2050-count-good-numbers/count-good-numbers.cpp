#define ll long long
class Solution {
public:
    int powermod(ll a, ll b, ll mod) {
        ll res = 1;
        while (b) {
            if (b & 1)
                res = (res * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        ll mod = 1e9 + 7;
        if (n % 2) {
            return ((powermod(4, (n / 2), mod) % mod) *
                    (powermod(5, n - (n / 2), mod) % mod)) %
                   mod;
        } else {
            return ((powermod(4, (n / 2), mod) % mod) *
                    (powermod(5, (n / 2), mod) % mod)) %
                   mod;
        }
    }
};