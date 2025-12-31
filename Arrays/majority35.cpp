#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
   //frequency calculation problem***
   int arr[1000];
   int n,i;
    cout<<"Enter the size "<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
   vector<int>count(n,0);
   for (int i = 0; i < n; i++)
   {
    count[arr[i]-1]++;
   }
   //unique
   cout<<"unique is "<<" ";
   for ( i = 0; i < n; i++)
   {
    if (count[i]==1)
    {
        cout<<i+1<<" " ;
    }    
   }
   cout<<endl;
   //missing
   for ( i = 0; i < n; i++)
   {
    if (count[i]==0)
    {
        cout<<"missing "<<i+1;
        break;
    }    
   }
   cout<<endl;
   //repeating
   for ( i = 0; i < n; i++)
   {
    if (count[i]==2)
    {
        cout<<"repeating "<<i+1;
        break;
    }    
   }
   cout<<endl;
   
    return 0;
}