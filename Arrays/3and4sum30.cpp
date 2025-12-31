    #include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // 3 sum****

    /*int i,ans,x,n;
    int arr[1000];
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter target "<<endl;
    cin>>x;
   sort(arr,arr+n);  //use for sort
    for ( i = 0; i < n-2; i++)
    {
       ans=x-arr[i];
      int st=i+1,end=n-1;

  while (st<=end)
  {
    if (arr[end]+arr[st]==ans)
    {
        cout<<arr[i]<<" "<<arr[st]<<" "<<arr[end];
        break;
    }
    else if (arr[end]+arr[st]>ans)
    {
       end--;
    }
    else{
        st++;
    }
  }
    } */

    // 4 sum****

    int i, j, ans, y, x, n;
    int arr[1000];
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter target " << endl;
    cin >> x;
    sort(arr, arr + n); // use for sort

    for (i = 0; i < n - 3; i++)
    {
        for (j = i + 1; j < n-2; j++)
        {
            y = x-arr[i]- arr[j];
            int st = j + 1, end = n - 1;
            while (st < end)
            {
                if (arr[st] + arr[end] == y)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[st] << " " << arr[end];
                    st++;
                    end--;
                }
                else if (arr[st] + arr[end] > y)
                {
                    end--;
                }
                else
                {
                    st++;
                }
            }
        }
    }                                                                   

    return 0;
}