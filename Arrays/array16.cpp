#include <iostream>
#include <climits>
using namespace std;

int main()
{
    /*int arr[6]={1,2,3,4,5,6};
    for (int i = 0; i < 6 ; i++)
    {
        cout<<arr[i]<<" ";
    }*/

    /*int arr[6]={0};
     for (int i = 0; i < 6 ; i++)
     {
         cout<<arr[i]<<" ";
     } */

    /* int arr[6];
     cout<<"Enter the element"<<endl;
     for (int i = 0; i < 6 ; i++)
      {
          cin>>arr[i];
      }
      for (int i = 0; i < 6 ; i++)
      {
          cout<<arr[i]<<" ";
      }  */

    /* int size;
     cout<<"enter"<<endl;
     cin>>size;
     int arr[1000];  //maximum size=1000-->const
     cout<<"Enter the element"<<endl;
     for (int i = 0; i < size ; i++)
      {
          cin>>arr[i];
      }
      for (int i = 0; i < size; i++)
      {
          cout<<arr[i]<<" ";
      } */

    /* int a;
     char b;
     cout<<sizeof(a);
     cout<<sizeof(b); */

    /* int arr[5]={1,2,3,4,5};
     //total memory in array
     cout<<sizeof(arr)<<endl;
     //how much element in array
     cout<<sizeof(arr)/sizeof(arr[2]); */

    /* //Q)Min*******
    
     int arr[5]={2,3,1,7,8};
     int ans= INT_MAX;
     for ( int i = 0; i < 5; i++)
     {
      if (arr[i]<ans)
      {
         ans=arr[i];
      }

     }
      cout<<ans; */

    // Q)Max*****

    int arr[5] = {2, 3, 1, 7, 8};
    int ans = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << ans;

    return 0;
}