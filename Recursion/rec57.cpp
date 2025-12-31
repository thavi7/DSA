#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool linearsearch(int arr[],int i,int x)
{
    if (i==-1)
    {
       return 0;
    }
    
  if (arr[i]==x)
  {
    return 1;
  }
  else{
    return linearsearch(arr,i-1,x);
  }
}

bool binarysearch(int arr[], int st,int end,int x)
{
  if (st>end)
  {
    return 0;
  }
  int mid=(st+end)/2;
  if (arr[mid]==x)
  {
    return 1;
  }
  else if (arr[mid]<x)
  {
    return binarysearch(arr,mid+1,end,x);
  }
 if (arr[mid]>x)
  {
    return binarysearch(arr,st,mid-1,x);
  }
  
  
  
}
int main() {
    int arr[]={2,4,7,3,11,8,12};
    int x;
    cout<<"enter x"<<endl;
    cin>>x;
  //  cout<<linearsearch(arr,6,x);
    cout<<binarysearch(arr,0,6,x);
    return 0;
}