#include <iostream>
using namespace std;

int main()
{ //search element in dec order****
    int arr[1000];
    int n, target, ans, mid, start = 0, end = n - 1;
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target" << endl;
    cin >> target;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
            break;
        }
        if (arr[mid] > target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return 0;
}