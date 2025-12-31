#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{ //count 0's****
   /* int i, j, m, n, row_i, col_i;
    int arr[100][100];
    cout << "enter the row " << endl;
    cin >> m;
    cout << "enter the col " << endl;
    cin >> n;
    cout << "enter the elements" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int st = 0, end = m * n - 1, first, last;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        row_i = mid / n, col_i = mid % n;

        if (arr[row_i][col_i] == 0)
        {
            first = mid;
            end = mid - 1;
        }

        else if (arr[row_i][col_i] > 0)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

     st = 0, end = m * n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        row_i = mid / n, col_i = mid % n;

        if (arr[row_i][col_i] == 0)
        {
            last = mid;
            st = mid + 1;
        }

        else if (arr[row_i][col_i] > 0)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    cout<<"the ans is "<<last-first+1<<endl; */

    //row with max 1's****

   /* int i, j, m, n;
    int arr[100][100];
    cout << "enter the row " << endl;
    cin >> n;
    cout << "enter the col " << endl;
    cin >> m;
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans=0, count=INT_MIN, row_index=-1;
    for ( i = 0; i < n ; i++)
    {
      int  st=0,end=m-1,first,last;
        while (st<=end)
        {
            int mid = st + (end - st) / 2;
            if (arr[i][mid]==1)
            {
                first=mid;
                end=mid-1;
            }
            else if (arr[i][mid]<1)
            {
                st=mid+1;
            }
            else {
                end=mid-1;
            }
            
        }
        st=0,end=m-1;
        while (st<=end)
        {
            int mid = st + (end - st) / 2;
            if (arr[i][mid]==1)
            {
                last=mid;
                st=mid+1;;
            }
            else if (arr[i][mid]<1)
            {
                st=mid+1;
            }
            else {
                end=mid-1;
            }
            
        }

        ans=last-first+1;
        if (ans>count)
        {
            count=ans;
            row_index=i;
        }
        
    }
    cout<<"ans is "<<row_index; */

   // binary search in 2d dec****
    int i,j,x,m,n,row_i,col_i;
     int arr[100][100];
     cout << "enter the row " << endl;
     cin >> m;
     cout << "enter the col " << endl;
     cin >> n;
     cout << "enter the elements" << endl;
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cin >> arr[i][j];
         }
     }
     cout<<"enter the target"<<endl;
     cin>>x;

    int st=0, end=m*n-1,row,col;
    while (st<=end)
    {
      int mid=st+(end-st)/2;
      row_i=mid/n , col_i=mid%n ;
      
      if (arr[row_i][col_i]==x)
      {
        row=row_i,col=col_i;
        break;
      }
      else if (arr[row_i][col_i]<x)
      {
        end=mid-1;
      }
      else{
        st=mid+1;
      }
      
    }
    
    cout<<row<<" "<<col; 


    
    
    



    return 0;
}