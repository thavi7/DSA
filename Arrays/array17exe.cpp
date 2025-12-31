#include <iostream>
using namespace std;

int main()
{
    /*int arr[1000],x,i,y,n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int start,end;
   start=-1;
   end=-1;
  cout<<"Put num1 "<<endl;
  cin>>x;
  cout<<"Put num2 "<<endl;
  cin>>y;
  for (int i = 0; i < 5; i++)
  {
   if (arr[i]==x)
   {
     start=i;

   }
   if (arr[i]==y)
   {
     end=i;
     break;
   }
  }
    for ( i = start+1; i < end; i++)
    {
       cout<<arr[i]<<" ";
    } */

//remove duplicate****
int arr[1000],temp[1000];
    int n,i;
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j=0;
    for ( i = 0; i < n-1; i++)
    {
        if (arr[i]!=arr[i+1])
        {
           temp[j]=arr[i];
           j++;
        }             
    }
    temp[j]=arr[n-1];   
    for ( i = 0; i <=j; i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
    }