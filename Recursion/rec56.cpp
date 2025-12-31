#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool checkpal(string str,int st,int end)
{
    if (st>=end)
    {  
        return 1;
    }
    
    if (str[st] != str[end])
    {
        return 0;
    }
    
    return checkpal(str,st+1,end-1);
}

int count(string s,int i)
{
   if (i==-1)
   {
    return 0;
   }
   
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    {
        return 1+count(s,i-1);
    }
    else
    {
       return count(s,i-1);
    }
    
}

void rev(string &s,int st,int end)
{
    if (st>=end)
    {
        return;
    }    
  char c=s[st];
  s[st]=s[end];
  s[end]=c;

    return rev(s,st+1,end-1);
}
void change(string &s1, int i)
{
    if (i==-1)
    {
       return;
    }
    s1[i]='A'+s1[i]-'a';
    return change(s1,i-1);
}
int main() {
    string str ="naman";
    string s ="amanos";
    string s1 ="lotus";
   // cout<<checkpal(str,0,4);
    //  cout<<count(s,5);
     // rev(s,0,5);
    //  cout<<s;
    change(s1,4);
    cout<<s1;
    return 0;
} 