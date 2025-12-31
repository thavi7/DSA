#include<iostream>
using namespace std;

void print(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
    
}
void printeven(int n)
{
  if (n==2)
  {
   cout<<n;
   return;
  }
  print(n-2);
  cout<<n;
}

    
int main() {
    // print 1---> N
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
   // print(n);

    //print 1 to n even
    if (n %2==1)
    {
        n--;
    }
    printeven(n);

    return 0;
}