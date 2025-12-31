#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int even(int arr[], int i, int n)
{
    int count=0;
    if (i==n)
    {
        return 0;
    }
    
  if (arr[i] % 2==0)
  {
    count++;
  }
  return count+even(arr,i+1,n); ; 
}
int main() {
    //  Find the Number of even elements in a given array of size N.
  int arr[]={2,7,34,88,1,3,9,6};
  cout<<even(arr,0,8);
    return 0;
}