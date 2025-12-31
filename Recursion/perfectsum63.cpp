#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int perfectsum(int arr[], int i, int n, int x)
{
    if(i==n)
   { if (x == 0)
        return 1;
    else
        return 0;
   }
    return perfectsum(arr, i + 1, n, x) +  perfectsum(arr, i + 1, n, x - arr[i]);
}

int repeatsum(int arr[], int i, int n, int x)
{
    if (x == 0)
        return 1;
    if (x < 0 || i == n)
        return 0;
    return repeatsum(arr, i + 1, n, x) +  repeatsum(arr, i, n, x - arr[i]);
}
int main()
{
    int arr[] = {2,3,4};
  //  cout<<perfectsum(arr, 0, 4, 8);
    cout<<repeatsum(arr, 0, 3, 6);
    return 0;
}