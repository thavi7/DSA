#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


void add(string num1, string num2){
int index1=num1.size()-1 , index2=num2.size()-1 ;
string ans;
int carry=0,sum;
while (index2>=0)
{
    sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;

carry=sum/10;
char c = '0'+sum%10;
ans +=c;
index2--,index1--;
}
while (index1>=0)
{
    sum=(num1[index1]-'0')+carry;

carry=sum/10;
char c = '0'+sum%10;
ans +=c;
index1--;
}
if (carry>0)
{
    ans.push_back('1');
}
reverse(ans.begin(),ans.end());
cout<<ans;
}










int main()
{ //sort vowel in a string****
    
     /*string s;
    cout << "enter string" << endl;
    cin >> s;
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i] > 0)
        {
            ans += c;
            upper[i]--;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i]>0)
        {
            ans += c;
            lower[i]--;
        }
    }

    int first = 0;
    int second = 0;
    while (second < ans.size())
    {
        if (s[first] == '#')
        {
            s[first] = ans[second];
            second++;
        }
        first++;
    }

    cout << s; */

    //add string*****
string num1,num2;
cout<<"enter num1 and num2"<<endl;
getline(cin,num1);
getline(cin,num2);

    if (num1.size()>=num2.size())
    {
        add(num1,num2);
    }
    else{
         add(num2,num1);
    }
    

    return 0;
}