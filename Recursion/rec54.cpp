#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int fib(int n)
{ if (n<=1)
{
    return n;
}
    return fib(n-1)+fib(n-2);
}

int totalways(int n)
{ 
   if (n<=1)
{
    return 1;
}
    return totalways(n-1)+totalways(n-2);
}

int gcd(int a, int b)
{
   if (b==0)
   {
    return a;
   }
      
    return gcd(b,a%b);
}
int main() {
    int n,a,b;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
  // cout<< fib(n);
  // cout<< totalways(n);
  cout<<gcd(a,b);
    return 0;
}