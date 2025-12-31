#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{ // longest palindroam***
    /*  string s;
      cout << "enter sentence" << endl;
      cin >> s;
      vector<int> lower(26, 0);
      vector<int> upper(26, 0);

      for (int i = 0; i < s.size(); i++)
      {
          if (s[i] >= 'a')
          {
              lower[s[i] - 'a']++;
          }
          else
          {
              upper[s[i] - 'A']++;
          }
      }

      int count = 0;
      bool odd = 0;
      for (int i = 0; i < 26; i++)
      {
          if (lower[i] % 2 == 0)
          {
              count += lower[i];
          }
          else
          {
              count += lower[i] - 1;
              odd = 1;
          }
      }
      for (int i = 0; i < 26; i++)
      {
          if (upper[i] % 2 == 0)
          {
              count += upper[i];
          }
          else
          {
              count += upper[i] - 1;
              odd = 1;
          }
      }

      cout << "ans is " << count + odd; */

    // sorting the sentence****

    string s;
    cout<<"enter ur sentence"<<endl;
    getline(cin,s);
    vector<string> ans(10);
    string temp;
    int count = 0, i = 0;
    while (i < s.size())
    {
        if (s[i] == ' ')
        {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        }
        else
        {
            temp += s[i];
        }
        i++;
    }
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    for (i = 0; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();

    cout << temp;

    return 0;
}