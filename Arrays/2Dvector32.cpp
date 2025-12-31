#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cout << "enter row and col" << endl;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 1));
    /* for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 4; j++)
         {
             cout<<matrix[i][j]<<" ";
         }
     } */

    /*cout<<"rows "<<matrix.size()<<endl;
    cout<<"col "<<matrix[0].size();*/
    cout << "enter values" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "ans is" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}