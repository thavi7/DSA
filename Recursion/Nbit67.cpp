#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void find(int n, vector<string>&ans, string &temp, int zero,int one)
{
    if (temp.size()==n)
    {
        ans.push_back(temp);
        return;
    }
    if (zero<one)
    {
       temp.push_back('0');
       find(n,ans,temp,zero+1,one);
       temp.pop_back();
    }
    temp.push_back('1');
    find(n,ans,temp,zero,one+1);
    temp.pop_back();
}

int main() {
    vector<string>ans;
    string temp;
  find(4,ans,temp,0,0);
  for (int i = 0; i < ans.size();i++)
  {
    cout<<ans[i]<<endl;
  }
  
    return 0;
}