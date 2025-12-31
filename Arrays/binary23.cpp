#include<iostream>
using namespace std;

int main() {
   /* int arr[7]={2,5,6,6,7,6,9};
    int target;
    cout<<"enter ur target num "<<endl;
    cin>>target;
    int first=-1,last=-1;
    int start=0, end=6;
    
//finding first appearence*****
    while (start<=end)
    {
        int mid = start+(end-start)/2;
     if (arr[mid]==target)
     {
        first=mid;
        end=mid-1;
     }
     else if (arr[mid]<target)
     {
       start=mid+1;
     }
     else {
        end=mid-1;
     }
    }
    cout<<"the first appearence is "<<endl<<first<<endl;

//finding last appearence*********
    start=0,end=6;
     while (start<=end)
    {
        int mid = start+(end-start)/2;
     if (arr[mid]==target)
     {
        last=mid;
        start=mid+1;
     }
     else if (arr[mid]<target)
     {
       start=mid+1;
     }
     else {
        end=mid-1;
     }

    }
    cout<<"the second appearence is "<<endl<<end;  */


    //finding missing elememt in sorted array***
    
   /* int arr[]={1,4,6,8,10,14,16,18};
    int target,mid;
    int start=0 ,end=7;
    int index=8;
    cout<<"enter ur target num "<<endl;
    cin>>target;

    while (start<=end)
    { mid=start+(end-start)/2;
      if (arr[mid]==target)
      {
         index=mid;
       break;
      }
      else if (arr[mid]<target)
      {
        start=mid+1;
      }
      else {
         index=mid;
        end=mid-1;
      }
      
    }
    
    cout<<index;*/

   //finding squares***
   
   int mid,ans, x, start=0 , end=x;
   cout<<"enter x"<<endl;
   cin>>x;
   if (x<4)
   {
      cout<<x;
   }
   
   while (start<=end)
   {
     mid=start+(end-start)/2;
     if (mid==x/mid)
     {
      ans=mid;
      break;
     }
     else if (mid<x/mid)
     {
      ans=mid;
      start=mid+1;
     }
     else{
      end=mid-1;
     }
   }
   cout<<ans;

    return 0;
}