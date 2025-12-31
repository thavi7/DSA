#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int partition(int arr[],int st,int end)
{
   int pos=st;
   for (int i = st; i <= end; i++)
   {
    if (arr[i]<=arr[end])
    {
        swap(arr[i],arr[pos]);
        pos++;
    }
    
   }
   return pos-1;

}
void quicksort(int arr[],int st, int end)
{
    if (st>=end)
    {
        return;
    }
    int pivot=partition(arr,st,end);
    quicksort(arr,st,pivot-1);
    quicksort(arr,pivot+1,end);
}

int main() {
    int arr[]={10,3,4,1,5,6,3,2,11,9};
    quicksort(arr,0,9);
    for (int i = 0; i < 10; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}