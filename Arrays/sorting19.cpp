#include <iostream>
using namespace std;

int main()
{
   int arr[6] = {10, 4, 1, 3, 2, 7};    
    int index, i, j;
    for (i = 0; i < 5; i++)
    {
        index = i ;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[index])           
                index = j;
                    }
            swap( arr[i], arr[index]);
        
        }
        for ( i = 0; i < 6; i++)
        {
            cout << arr[i] << " ";
        } 



    return 0;
}