#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


void rotateclockwise(string &s) {
    char c = s[s.size()-1];
    int i=s.size()-2;
    while (i>=0)
    {
        s[i+1]=s[i];
        i--;
    }
    s[0] = c;
    
}
void rotateanticlockwise(string &s) {
    char c = s[0];
    int i=1;
    while (i<s.size())
    {
        s[i-1]=s[i];
        i++;
    }
    s[s.size()-1] = c;
    
}

int main() {

  /*  string address;

    cout<<"enter element"<<endl;
       cin >>address;
    
    
    string ans;
    
    int i=0;
    while (i< address.size())
    {
        if (address[i]=='.')
        {
            ans += "[.]";
        }
        else{
            ans += address[i];
        }
        i++;
    }
    cout<<ans; */
  
// string rotate by 2 place***

    /*string str1,str2;

    cout<<"enter str1"<<endl;
       cin >>str1;
       cout<<"enter str2"<<endl;
       cin >>str2;
       if (str1.size()!= str2.size())
       {
        return 0;
       }
       
       string temp = str1;
    
       rotateclockwise(temp);
       rotateclockwise(temp);
       if (temp==str2)
       {
        cout<<"yes";
        return 0;
       }
       temp = str1;

       rotateanticlockwise(temp);
       rotateanticlockwise(temp);
       if (temp==str2)
       {
        cout<<"yes";
       return 0;
       }
       cout<<"no"; */

       //check pangram****
      string s;
    cout<<"enter sentence"<<endl;
     cin>>s;
     vector<bool>alpha(26,0);
     for (int i = 0; i < s.size(); i++)
     {
        alpha[s[i]-'a']=1;
     }
     for (int i = 0; i < 26; i++)
     {
        if (alpha[i]==0)
        {
           cout<<"not a pangram";
           return 0;
        }
        
     }
     cout<<"pangram";

    return 0;
}