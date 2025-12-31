#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // longest substring without repeating cha****
    /*  string s;
      cout<<"Enter the s"<<endl;
      getline(cin,s);
      vector<bool>count(256,0);
      int first=0,second=0,len=0;
      while (second<s.size())
      {
          while (count[s[second]])
          {
              count[s[first]]=0;
              first++;
          }
          count[s[second]]=1;
          len= max(len,second-first+1);
          second++;

      }
      cout<<len; */

    // smallest distinct window***

    string s;
    cout << "Enter the s" << endl;
    getline(cin, s);
    vector<int> count(256, 0);
    int first = 0, second = 0, len = s.size(), dif=0;

    // counting diff or unique values

    while (first < s.size())
    {
        if (count[s[first]] == 0)
        {
            dif++;
            count[s[first]]++;
        }
        first++;
    }
    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }
    first = 0;
    while (second < s.size())
    {
        // diff exist
        while (dif && (s[second] == 0))
        {
            if (count[s[second]] == 0)
            {
                dif--;
                count[s[second]]++;               
            }
            second++;
        }
        len = min(len, second - first);
        // diff 1;
        while (dif == 0)
        {
            len = min(len, second - first);
            count[s[first]]--;
            if (count[s[first]] == 0)
            {
                dif++;
            }
            first++;
        }
    }
    cout<<len;

    return 0;
}