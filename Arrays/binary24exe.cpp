#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int arr[1000];
  int n, ans = -1, ans2 = -1, index = -1, mid;
  cout << "enter the size" << endl;
  cin >> n;
  cout << "enter the element" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int secondpeak = arr[0];

  int start = 0, end = n - 1;

  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    {
      ans = mid;
      break;
    }
    else if (arr[mid] > arr[mid - 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1] && arr[i] != arr[ans])
    {
      ans2 = i;
      break;
    }
  }

  secondpeak = min(arr[ans], arr[ans2]);

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == secondpeak)
    {
      index = i;
    }
  }
  cout << "ans is " << index;

  return 0;
}