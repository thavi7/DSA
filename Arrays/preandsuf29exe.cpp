#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    //max diff b/w two elements****

int i,n;
    int arr[1000];
    cout<<"enter the size"<<endl;
    cin>>n;    
    cout<<"enter elements"<<endl;
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int suffix=arr[n-1], ans=INT_MIN;
   for ( i=n-2 ; i>=0 ; i--)
   {
    ans = max(ans, suffix-arr[i]);
    suffix=max(suffix,arr[i]);
   }
   cout<<"ans is "<<ans;
    return 0;
}