#include <iostream>
using namespace std;

int main()
{
    //dec order*****
   /* int arr[1000];
    int i, n, j;
    cout << "enter size" << endl;
    cin >> n;
    cout<<"the elements are"<<endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        int index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[index] < arr[j])

                index = j;
        }
        swap(arr[index], arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        cout <<"dec order "<< arr[i] << " ";
    }  */

   char arr[1000];
    int i, n, j;
    cout << "enter size" << endl;
    cin >> n;
    cout<<"the elements are"<<endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"the letters r "<<" ";
    for (i = 0; i < 5; i++)
    {
       int index = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[index])           
                index = j;
                    }
            swap( arr[i], arr[index]);
        
        }
        for ( i = 0; i < 6; i++)
        {
            cout<<arr[i] << " ";
        } 


    return 0;
}