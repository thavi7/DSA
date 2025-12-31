#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int fact(int n)
{
    if (n==0)
    {
   return 1;
    }
 return n*fact(n-1);
} 

int sum(int n)
{
    if (n==1)
    {
   return 1;
    }
 return n+sum(n-1);
} 

int pow(int num, int n)
{
    if (n==1)
    {
   return num;
    }
 return num*pow(num,n-1);   
}
int sqsum(int n)
{
  if (n==1)
  {
   return n;
  }
   return (n*n)+sqsum(n-1);
}

int main() {
    int n,num;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter num"<<endl;
    cin>>num;
   // cout<<fact(n)<<endl;
   // cout<<sum(n);
   // cout<<pow(num,n);
   cout<<sqsum(n);
    return 0;
}