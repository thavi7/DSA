#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int num(char k) {
if (k =='i')
{
    return 1;
}
else if (k =='v')
{
    return 5;
}
else if (k =='x')
{
    return 10;
}
else if (k =='l')
{
    return 50;
}
else if (k =='c')
{
    return 100;
}
else if (k =='d')
{
    return 500;
}
else{
    return 1000;
}

} 

int main() {

    //roman to int***

  /*  string s;
    cout<<"Enter the s"<<endl;
    getline(cin,s);
    int sum=0,i=0;
    while (i<s.size()-1)
    {
        if (num(s[i])<num(s[i+1]))
        {
            sum -= num(s[i]);
        }
        else{
            sum += num(s[i]);
        }
        i++;
    }
    sum += num(s[s.size()-1]);
    cout<<sum; */

    //factorial of a num****

    int n;
    cout<<"enter the value"<<endl;
    cin>>n;
        vector<int>ans(1,1);
       int i;
        while (n>1)
        {
            int res,carry=0;
        for ( i = 0; i < ans.size(); i++)
        {
            res = ans[i]*n + carry;
            carry= res/10;
            ans[i]= res%10;
        }
    
        while (carry)
        {
            ans.push_back(carry%10);
            carry = carry/10;
        }    
        n--;        
        }
    
        reverse(ans.begin(),ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
           cout<<ans[i];
        }
        
    //int to roman****

   
    
    return 0;
}