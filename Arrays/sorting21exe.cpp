#include<iostream>
using namespace std;

int main() {
    char arr[1000];
    int i, j, n;
    cout << "enter the size" << endl;
    cin >> n;
    cout << "enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

for ( i = 1; i < n; i++)
{
    for ( j = i; j > 0 ; j--)
    {
        if (arr[j]>arr[j-1])
        {
           swap(arr[j],arr[j-1]);
        }
        else {
            break;
        }
    }
    
}
for ( i = 0; i < n; i++)
{
   cout<<arr[i];
}







    
    return 0;
}