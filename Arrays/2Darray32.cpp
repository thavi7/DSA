#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{ //wave form****

    /* int row,col;
    int arr[100][100];
      cout<<"enter the row "<<endl;
      cin>>row;
      cout<<"enter the col "<<endl;
      cin>>col;
      cout<<"enter the elements"<<endl;
      for ( int i = 0; i < row ; i++)
      {
          for (int j = 0; j < col ; j++)
          {
              cin>>arr[i][j];
          }
      }

    for (int j = 0; j < col; j++)
    {
        if (j % 2==0)
        {
            for (int i = 0; i < row; i++)
            {
               cout<<arr[i][j]<<" ";
            }

        }
        else{
            for (int i = row-1; i >=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }

        }

    } */

    // spiral form*********

   /* int row, col;
    int arr[100][100];
    cout << "enter the row " << endl;
    cin >> row;
    cout << "enter the col " << endl;
    cin >> col;
    cout << "enter the elements" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int top = 0, bottom = row - 1, right = col - 1, left = 0;
    cout<<"ans is "<<endl;

    while (top <= bottom && left<=right)
    {
        // for top
        for (int j = left; j <= right; j++)
        {
            cout << arr[top][j]<<" ";
        }
           top++;
        // for right
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right]<<" ";
        }
        right--;

        // for bottom
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << arr[bottom][j]<<" ";
            }
            bottom--;
        }
        
        // for left
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left]<<" ";
            }
            left++;
        }
        
    } */

   //transpose matrix******

   int row, col;
    int arr[100][100];
    cout << "enter the row " << endl;
    cin >> row;
    cout << "enter the col " << endl;
    cin >> col;
    cout << "enter the elements" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row-1; i++)
    {
        for (int j = i+1; j < col; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
     
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<< arr[i][j]<<" ";
        }
    }


    return 0;
}