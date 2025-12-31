#include <iostream>
using namespace std;

int main() {
//segregate of 0 & 1***
    /*int arr[1000];
    int n,i,ans;
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter the element contains only 0 or 1" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int st=0, end=n-1;
    while (st <= end)
    {
        if (arr[st] == 0)
        {
            st++;
        }
        else
        {

            if (arr[end] == 0)
            {
                swap(arr[st], arr[end]);
                st++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }

    for ( i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    } */

   //two sum****

   /* int arr[1000];
    int n,i,target,ans;
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target" << endl;
    cin >> target;
    int st=0,end=n-1,num1=-1,num2=-1;
  while (st<=end)
  {
    if (arr[st]+arr[end]==target)
    {
        num1=arr[st] , num2=arr[end];
        break;
    }
    else if (arr[st]+arr[end]>target)
    {
       end--;
    }
    else{
        st++;
    }
  }
  
    cout<<num1<<" & "<<num2; */

//pair with diff***

int arr[1000];
    int n,i,target,ans;
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target" << endl;
    cin >> target;
    int st=0,end=1,num1=-1,num2=-1;
  while (st<=end)
  {
    if (arr[end]-arr[st]==target)
    {
        num1=arr[st] , num2=arr[end];
        break;
    }
    else if (arr[end]-arr[st]<target)
    {
       end++;
    }
    else{
        st++;
    }
  }
  
    cout<<num1<<" & "<<num2; 
    return 0;
}