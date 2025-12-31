#include <iostream>
#include <climits>
using namespace std;

int main()
{
  // SEARCH ELEMENT*****

  /* int arr[]={22,4,76,1,9},index=-1,x;
  cout<<"Put x "<<endl;
  cin>>x;
  for (int i = 0; i < 5; i++)
  {
   if (arr[i]==x)
   {
     index=i;
     break;
   }
  }
  cout<<index; */

  // REVERS ELEMENT******

  /* int arr[6]={1,2,3,4,5,6};
    int start=0, end=5;
    while(start<end)
    {
        swap(arr[start], arr [end]);
        start ++;
        end --;
    }

    for ( int i = 0; i < 6; i++)
    {
       cout<<arr[i]<<" ";
    } */

  // SECOND LARGEST ELEMENT****

  /*int arr[1000];
  int n,i;
  cout<<"Enter the n"<<endl;
  cin>>n;
  cout<<"enter the elements"<<endl;
  for ( i = 0; i < n; i++)
  {
    cin>>arr[i];
  }

  int ans=INT_MIN;
  for(i=0;i<n;i++)
  {
    if (arr[i]>ans)
    {
      ans=arr[i];
    }
  }

  int second=INT_MIN;
  for ( i = 0; i < n; i++)
  {
    if (arr[i] != ans)
    {
        second=max(second,arr[i]); //pick the max value between swcond and arr[i]*****
    }
  }
  cout<<second; */

  // MISSING NUMBER*****

  /* int arr[5]={1,3,4,5,6} , n=6;
int sum=0;
for (int i = 0; i < 5; i++)
{
  sum=arr[i]+sum;
}
int total;
total=n*(n+1)/2;
 cout<<total-sum; */

  // find the random number in fibonacci series

  /* int n;
  cout << "Enter the Number " << endl;
  cin >>n;
  int arr[1000];
  arr[0]=0;
  arr[1]=1;
  for (int  i = 2; i < n; i++)
  {
      arr[i]=arr[i-1]+arr[i-2];
  }
  cout<<arr[n-1];
  return 0;*/

  // ROTATE ELEMENTS****

   int n,i;
  int arr[1000];
  cout<<"Enter the n"<<endl;
  cin>>n;
  cout<<"enter the elements"<<endl;
  for ( i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
 int temp=arr[n-1];
 for ( i = n-2; i >=0; i--)
 {
   arr[i+1]=arr[i];
 }
 arr[0]=temp;
 for ( i = 0; i<n; i++)
 {
  cout<<arr[i]<<" ";
 } 

  return 0;
}