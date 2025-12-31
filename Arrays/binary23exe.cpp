#include <iostream>
using namespace std;

int main()
{ // repetating elements by binary search****

    /* int arr[1000];
     int n;
     int first = -1, last = -1;
     cout << "enter the size" << endl;
     cin >> n;
     cout << "enter the element" << endl;
     for (int i = 0; i < n; i++)
     {
         cin >> arr[i];
     }

     int start = 0;
     int end = n - 1;
     int target, ans, mid;
     cout << "enter the target" << endl;
     cin >> target;

     while (start <= end)
     { mid=start+(end-start)/2;
         if (arr[mid] == target)
         {
             first = mid;
             end = mid - 1;
         }
         else if (arr[mid] > target)
         {
             end = mid - 1;
         }
         else
         {
             start = mid + 1;
         }
     }
     start=0 ;
     end=n-1;

 while (start <= end)
     { mid=start+(end-start)/2;
         if (arr[mid] == target)
         {
             last = mid;
             start=mid+1;
         }
         else if (arr[mid] > target)
         {
             end = mid - 1;
         }
         else
         {
             start = mid + 1;
         }
     }
     cout<<(last-first)+1; */

    // finding cube roots***
    
    /* int n, mid, ans, start = 0, end = n - 1, x;
     cout << "enter number" << endl;
     cin >> x;
     while (start <= end)
     {
         mid = start + (end - start) / 2;
         if (mid == x / (mid * mid))
         {
             ans = mid;
             break;
         }
         else if (mid > x / (mid * mid))
         {
             end = mid - 1;
         }
         else
         {
             ans = mid;
             start = mid + 1;
         }
     }

     cout << ans; */

    // count 0's***

    int arr[] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
    int start = 0;
    int end = 10;
    int ans, mid;

    int first, last;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == 0)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > 0)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        } 
    }
    start = 0;
    end = 10;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == 0)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > 0)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    ans = (last - first) + 1;
    cout << ans;
    return 0;
}