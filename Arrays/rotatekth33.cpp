#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

 void rotate( int arr[][100],int n){
    int i,j;
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

}


int main() {
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

     int k;
     cout<<"enter k"<<endl;
     cin>>k;
     k=k%4;
     while (k>0)
     {
       rotate(arr,n);
       k--;
     }
     cout<<"ans is"<<endl;
    for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
    cout<< arr[i][j]<<" ";
         }
cout<<endl;
     }
    return 0;
}