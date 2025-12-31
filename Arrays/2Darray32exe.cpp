#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
/*  int row, col;
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

    for (int i = row; i >= 1; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            swap(arr [i][j],arr[j][i]);
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<< arr[i][j];
        }
    } */

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
    for (int i = 0; i < row; i++)
    {
        if (i % 2==0)
        {
            for (int j = 0; j < col; j++)
            {
               cout<<arr[i][j]<<" ";
            }

        }
        else{
            for (int j=col-1; j >=0; j--)
            {
                cout<<arr[i][j]<<" ";
            }

        }

    }
    return 0;
}