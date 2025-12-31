#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void fun(int n)
{
  if(n==0)
  {
    cout<<"happy birthday";
  return;
  }
  cout<<n<<" days left for birthday"<<endl;
  fun(n-1);
}

void table(int n, int num)
{
  int x;
  if(num==1)
  {
    cout<< n<<" ";
    return;
  }
  table(n,num-1);
  cout<<n*num<<" ";
  
}
int main() {
   // fun(10);
   table(6,10);
    return 0;
}
