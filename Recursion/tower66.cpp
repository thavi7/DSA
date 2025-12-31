#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void tow(int n, int source,int help,int dest)
{
  if (n==1)
  {
    cout<<"move disc "<<n<<" from "<<source<<" to "<<dest<<endl;
    return; 
  }
  
    tow(n-1,source,dest,help);
    cout<<"move disc "<<n<<" from "<<source<<" to "<<dest<<endl;
   tow(n-1,help,source,dest);
}
int main() {
    tow(2,1,2,3);
    return 0;
}
