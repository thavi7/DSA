#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


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

    //string palingdroam kmp***
   /* string s;
    cout<<"enter string "<<endl;
    cin>>s;
    int n=s.size();

   string rev=s;
    reverse(rev.begin(),rev.end());
    s += "$";
    s += rev;
   int ans=-1;
    //lps
    vector<int>lps(s.size(),0);
    int pre=0,suf=1;
    while (suf<s.size())
    {
        if (s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            pre++,suf++;
        }
        else{

            if (pre==0)
            {
                lps[suf]=0;
                suf++;
            }
            else{
                pre=lps[pre-1];
            }
            
        }
        
    }
    cout<<n - lps[s.size()-1];  */


    // circular string matching***
  /*  string s1;
    cout<<"enter string "<<endl;
    cin>>s1;
    int n=s1.size();
    string s2;
    cout << "enter string" << endl;
    cin >> s2;
    int m = s2.size();
   
    s1 += s1;
    int t=s1.size();

    vector<int> lps(m, 0);

    lpsfind(lps,s2);
    int first=0,second=0;
    while (second<m && first<t)
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
    } */
    
    // repeated string match*****

    string a;
    cout<<"enter string "<<endl;
    cin>>a;
   
    string b;
    cout << "enter string" << endl;
    cin >> b;
   
    if (a==b)
    {
        return 1;
    }
    int repeat=1;
    string temp=a;
    while (temp.size()<=b.size())
    {
        temp += a;
        repeat ++;
    }
    if (kmp(temp,b)==1)
    {
        return repeat;
    }
    if (kmp(temp,b)==0)
    {
        return repeat +1;
    }
    
  //im unable to make a kmp fn
    
    return 0;
}