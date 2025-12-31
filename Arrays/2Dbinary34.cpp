#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    //binary search in 2d inc****
 /*   int i,j,x,m,n,row_i,col_i;
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
        st=mid+1;
      }
      else{
        end=mid-1;
      }
      
    }
    
    cout<<row<<" "<<col; */

//search in row col sorted matrix***

int i,j,x,m,n,row,col;
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

     i=0,j=n-1;
     while (i<m && j>=0)
     {
        if (arr[i][j]==x)
        {
            row=i,col=j;
            break;
        }
        else if (arr[i][j]<x)
        {
            i++;
        }
        else{
            j--;
        }
        
     }
    
     cout<<row<<" "<<col;

    return 0;
}