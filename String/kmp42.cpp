#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{ //Longest pre suf***
    string s;
    cout << "enter string" << endl;
    cin >> s;
    int n = s.size();
    vector<int> lps(n, 0);
    int pre = 0, suf = 1;
    while (suf < n)
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }

        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
   cout<<"ans is "<<lps[n-1];

    return 0;
}