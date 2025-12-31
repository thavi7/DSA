#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
//divide array in two subarray with equal sum***
/*bool divide(vector<int>arr)
{
   int totalsum=0, prefix=0, n=arr.size();

    for ( int i = 0; i < n; i++)
    {
        totalsum+=arr[i];
    }
    for ( int i = 0; i < n-1; i++)
    {
        prefix+=arr[i];
        if (totalsum==2*prefix)
        {
            return 1;
        }
        
    }
    return 0;
    
}

int main() {
    int i,n;
    cout<<"enter the size"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements"<<endl;
    for ( int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    cout<<divide(v); */

   int main() {

//kadanes algorith***

    int i,n;
    int arr[1000];
    cout<<"enter the size"<<endl;
    cin>>n;    
    cout<<"enter elements"<<endl;
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
int maxi=INT_MIN, prefix=0;
for ( i = 0; i < n; i++)
{
    prefix+=arr[i];
    maxi=max(maxi,prefix);
    if (prefix<0)
    {
        prefix=0;
    }
    
}
cout<<maxi;
   

    return 0;
}