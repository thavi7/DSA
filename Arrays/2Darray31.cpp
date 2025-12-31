#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    // search element in 2D array****
    /*  int i,j,x,row,col;
      int arr[100][100];
      cout<<"enter the row "<<endl;
      cin>>row;
      cout<<"enter the col "<<endl;
      cin>>col;
      cout<<"enter the elements"<<endl;
      for ( i = 0; i < row ; i++)
      {
          for ( j = 0; j < col ; j++)
          {
              cin>>arr[i][j];
          }

      }

      cout<<"enter target"<<endl;
      cin>>x;

      for ( i = 0; i < row ; i++)
      {
          for ( j = 0; j < col ; j++)
          {
              if (arr[i][j]==x)
              {
                  cout<<"yes"<<endl;
                  return 0;
              }
          }

      }

      cout<<"no"; */

    // add 2 matrix***

    /*int row, col;
    int arr1[4][3] = {1, 3, 7, 2, 8, 4, 5, 12, 54, 87, 219, 43};
    int arr2[4][3] = {3, 54, 2, 5, 6, 9, 8, 1, 12, 43, 83, 73};
    int ans[4][3];
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 3; col++)
        {
            ans[row][col] = arr1[row][col] + arr2[row][col];
        }
    }

    for (row = 0; row < 4; row++)
        for (col = 0; col < 3; col++)
        {
            cout << ans[row][col]<<" ";
        }*/

       //print row index for max sum*****

    /*int i,j,x,row,col;
      int arr[100][100];
      cout<<"enter the row "<<endl;
      cin>>row;
      cout<<"enter the col "<<endl;
      cin>>col;
      cout<<"enter the elements"<<endl;
      for ( i = 0; i < row ; i++)
      {
          for ( j = 0; j < col ; j++)
          {
              cin>>arr[i][j];
          }
      }
    int sum=INT_MIN, index=-1;
      for ( i = 0; i < row; i++)
      {
        int total=0;
        for ( j = 0; j < col; j++)
        {
            total += arr[i][j];
        }
        if (sum<total)
        {
            sum=total;
            index=i;
        }                
      }
      cout<<"index is"<<index;*/

      //diagonal sum****

  /*int row,col;
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

     int first=0;
     for (int i = 0; i < row; i++)
     {
        first += arr[i][i];
     }
    
    int i=0,j=col-1;
     int second=0;
     while (i<row-1)
     {
        second += arr[i][j];
        i++,j--;
     }
     
     cout<<first<<" "<<second; */

     //reverse an array********
 int row,col;
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

    for (int i = 0; i < row; i++)
    {
      int  st=0, end=col-1;
       while (st<=end)
       {
        swap(arr[i][st], arr[i][end]);
        st++,end--;
       }
       
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        
    }
    

    return 0;
}