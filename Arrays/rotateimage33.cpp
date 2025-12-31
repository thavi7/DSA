#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // rotate by 90 clockwise*****
    /* int i,j,n;
     int arr[100][100];
     cout << "enter the row and col " << endl;
     cin >> n;
     cout << "enter the elements" << endl;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cin >> arr[i][j];
         }
     }
     for ( i = 0; i < n-1; i++)
     {
         for ( j = i+1; j < n; j++)
         {
            swap(arr[i][j],arr[j][i]);
         }

     }

     for ( i = 0; i < n; i++)
     { int st=0,end=n-1;
        while (st<end)
        {
           swap(arr[i][st], arr[i][end]);
           st++,end--;
        }

     }

     cout<<"ans is"<<endl;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
    cout<< arr[i][j]<<" ";
         }

     } */

    // rotate by 180****

   /*  int i, j, n;
    int arr[100][100];
    cout << "enter the row and col " << endl;
    cin >> n;
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        int st1 = 0, end1 = n - 1;
        while (st1 < end1)
        {
            swap(arr[i][st1], arr[i][end1]);
            st1++, end1--;
        }
    }

    for (j = 0; j < n; j++)
    {
        int st2 = 0, end2 = n - 1;
        while (st2 < end2)
        {
            swap(arr[st2][j], arr[end2][j]);
            st2++, end2--;
        }
    }

    cout << "ans is" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    } */

    // rotate by 90 anticlockwise*****
     int i,j,n;
     int arr[100][100];
     cout << "enter the row and col " << endl;
     cin >> n;
     cout << "enter the elements" << endl;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cin >> arr[i][j];
         }
     }
     for ( i = 0; i < n-1; i++)
     {
         for ( j = i+1; j < n; j++)
         {
            swap(arr[i][j],arr[j][i]);
         }

     }

     for ( j = 0; j < n; j++)
     { int st=0,end=n-1;
        while (st<end)
        {
           swap(arr[st][j], arr[end][j]);
           st++,end--;
        }

     }

     cout<<"ans is"<<endl;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
    cout<< arr[i][j]<<" ";
         }

     } 

    return 0;
}