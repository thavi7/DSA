#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void subsum(int arr[], int i, int n, int sum, vector<int> &ans)
{
    if (i == n)
    {
        ans.push_back(sum);
        return;
    }

    subsum(arr, i + 1, n, sum, ans);          // no
    subsum(arr, i + 1, n, sum + arr[i], ans); // yes
}
bool targetsum(int arr[], int i, int n, int x)
{
    if (x == 0)
        return 1;
    if (x < 0 || i == n)
        return 0;
    return targetsum(arr, i + 1, n, x) || targetsum(arr, i + 1, n, x - arr[i]);
}
int main()
{
    int arr[] = { 3, 4, 5};
    vector<int> ans;
    /* subsum(arr,0,3,0,ans);
     for (int i = 0; i < ans.size(); i++)
     {
        cout<<ans[i]<<endl;
     } */
    cout<<targetsum(arr, 0, 3, 8);
    return 0;
}
