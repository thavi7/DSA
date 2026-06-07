class Solution {
public:
    string dec2bin(int n) {
        if (n == 0)
            return "0";
        string res;
        while (n > 0) {
            res += (n % 2) + '0';
            n /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    bool consecutiveSetBits(int n) {
        string s = dec2bin(n);

        int count = 0;
        size_t pos = s.find("11");
        while (pos != string::npos) {
            count++;
            pos = s.find("11", pos + 1);
        }

        if (count == 1) {
            return 1;
        } else
            return 0;
    }
};