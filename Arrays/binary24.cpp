#include <iostream>
using namespace std;

int main()
{
    //peak mountain*****

  /*  int arr[1000];
      int n, ans,mid;
      cout << "enter the size" << endl;
      cin >> n;
      cout << "enter the element" << endl;
      for (int i = 0; i < n; i++)
      {
          cin >> arr[i];
      }
      int start = 0, end = n - 1;

      while (start<=end)
      {
         mid=start+(end-start)/2;
         if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
         {
          ans=mid;
          break;
         }
         else if (arr[mid]>arr[mid-1])
         {
          start=mid+1;
         }
         else {
          end=mid-1;
         }
      }
      cout<<"the ans is"<<ans; */

      //smallest element in rotated array****

     int n;
     cout<<"enter n"<<endl;
    cin>>n;
    int arr[1000];
    cout<<"enter element"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int start=0, end=n-1, ans= arr[0],mid;
    while (start<=end)
    {
        mid = start + (end - start) / 2;
     if (arr[mid]>=arr[0])
     {
         start=mid+1;
     }
     else{
         ans=arr[mid];
         end=mid-1;
     }
    }
    cout<<ans; 

    //search in rotated array****

  /*  int arr[1000];
    int n, x, ans = -1, mid;
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1;
    cout << "enter the target" << endl;
    cin >> x;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            ans = mid;
            break;
        }

        else if (arr[mid] >= arr[0])
        {
            if (arr[start] <= x && arr[mid] >= x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= x && arr[end] >= x)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
 cout<<ans; */

  //k'th +ve int missing****
  
 /*int arr[1000];
    int n, k, mid;
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1,ans =n;
    cout << "enter the k" << endl;
    cin >> k;

    while (start<=end)
    { mid=start+(end-start)/2;
       if (arr[mid]-mid-1>=k)
       {
        ans=mid;
        end=mid-1;
       }
       else {
        start=mid+1;
       }
    }
    cout<<ans+k; */
    
    return 0;

}