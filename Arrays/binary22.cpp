 #include<iostream>
using namespace std;

/* int main() {

//search element*******

 int arr[1000];
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for ( int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    
   int start=0;
   int end=n-1;
   int target,mid ;
   cout<<"enter the target"<<endl;
    cin>>target;


   while (start<=end)
   { mid=(start+end)/2;
     if (arr[mid]==target)
     {
        cout<<"gotta "<<mid;
        break;
     }
     else if (arr[mid]>target)
     {
        end=mid-1;
     }
     else {start=mid+1;}    
   }
   

    
    return 0;
} */

#include<iostream>
using namespace std;

int binarysearch(int arr[],int n , int target )
{
int start=0;
   int end=n-1;
   int mid ;
   while (start<=end)
   { mid=(start+end)/2;
     if (arr[mid]==target)
     {
        return mid;
        break;
     }
     else if (arr[mid]<target)
     {
        start=mid+1;
     }
     else {end=mid-1;}    
   }
   

return -1;

}

int main() {
    int arr[1000];
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for ( int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    int target;
   cout<<"enter the target"<<endl;
    cin>>target;

   cout<<binarysearch(arr,n,target);

    return 0;
}