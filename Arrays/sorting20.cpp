#include <iostream>
using namespace std;

int main()
{

    int arr[1000];
    int i, j, n;
    cout << "enter the size of array" << endl;
    cin >> n;
    cout << "enter the element of array";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = n - 2; i >= 0; i--)
    {

        for (j = 0; j <= i; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}