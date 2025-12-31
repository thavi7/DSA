#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void print(int arr[] , int i,int n)
{ if (i==n)
{
   return;
}
    cout<<arr[i]<<" ";
    print(arr,i+1,n);
}
void printre(int arr[] , int i)
{ if (i==-1)
{
   return;
}
  printre(arr,i-1);
    cout<<arr[i]<<" ";
}
int sum(int arr[], int i, int n)
{
  if (i==n)
  {
    return 0;
  }  
    return arr[i]+sum(arr,i+1,n);
}

int minelement(int arr[], int i,int n)
{  if (i==n-1)
{
    return i;
}
   return min(arr[i],minelement(arr,i+1,n));
}

int main() {
  int arr[]={2,7,24,9,4};
 // print(arr,0,5);
 // cout<<endl;
 // printre(arr,4);
  cout<<sum(arr,0,5);
 // cout<<minelement(arr,0,5);
    return 0;
}