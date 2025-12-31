#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//stirig matching***

void lpsfind(vector<int>&lps , string s) {
    int pre = 0, suf = 1;
    while (suf < s.size())
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

}
 
int main() {
    string s1;
    cout << "enter string" << endl;
    cin >> s1;
    int n = s1.size();

    string s2;
    cout << "enter string" << endl;
    cin >> s2;
    int m = s2.size();

    vector<int> lps(m, 0);

    lpsfind(lps,s2);
    int first=0,second=0;
    while (second<m && first<n)
    {
        if (s2[second] == s1[first])
        {
            second++,first++;
        }
        else{
            if (second==0)
            {
               first++;
            }
            else{
                second=lps[second-1];
            }
            
        }
        
    }

    if (second==m)
    {
       cout<<"ans is "<<first-second;
    }
    
    
    
    return 0;
}