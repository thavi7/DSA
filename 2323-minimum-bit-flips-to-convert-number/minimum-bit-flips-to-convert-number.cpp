class Solution {
public:
    int minBitFlips(int n, int x) {
        int gadhaami=n^x;
        int tumiogadha=0;
        while(gadhaami)
        {
            tumiogadha++;
            gadhaami&= (gadhaami-1);
        }
        return tumiogadha;
    }
};