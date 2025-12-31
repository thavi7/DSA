#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {

    //print sum of each col***

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
      { int sum=0;
        for (int i = 0; i < row; i++)
        {
          sum += arr[i][j];
        }
        cout<<sum<<" ";
      } */

     //subtraction of two matrix****

    /* int row, col;
    int arr1[4][3] = {1, 3, 7, 2, 8, 4, 5, 12, 54, 87, 219, 43};
    int arr2[4][3] = {3, 54, 2, 5, 6, 9, 8, 1, 12, 43, 83, 73};
    int ans[4][3];
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 3; col++)
        {
            ans[row][col] = arr1[row][col] - arr2[row][col];
        }
    }

    for (row = 0; row < 4; row++)
        for (col = 0; col < 3; col++)
        {
            cout << ans[row][col]<<" ";
        } */

       //largest element in 2D****

    /* int arr[3][4]={2,9,5,27,19,0,11,12,31,20,2,4};
      int ans=INT_MIN;
       for (int i = 0; i <3; i++)
       {
        for (int j = 0; j < 4; j++)
        {
            ans= max(ans,arr[i][j]);
        }
        
       }
       cout<<"max is "<<ans; */

     //smallest element*****

     /*int arr[3][4]={2,9,5,27,19,0,11,12,31,20,2,4};
      int ans=INT_MAX;
       for (int i = 0; i <3; i++)
       {
        for (int j = 0; j < 4; j++)
        {
            ans= min(ans,arr[i][j]);
        }
        
       }
       cout<<"min is "<<ans;*/

       //Given a matrix of size n*n, Print sum of diagonal element.
 /*Ex:    1 2 3
          4 5 6
          7 8 9 */

      int arr[3][3]={1,2,3,4,5,6,7,8,9};
      int first=0;
     for (int i = 0; i < 3; i++)
     {
        first += arr[i][i];
     }
    
    int i=0,j=2;
     int second=0;
     while (i<3)
     { 
      if (i==j)
      {
        i++,j--;
        continue;
      }
      second += arr[i][j];
      i++,j--;
      
        
        
     }
     cout<<first<<endl<<second<<endl;
     cout<<"the ans is "<<first+second;
          
    return 0;
}