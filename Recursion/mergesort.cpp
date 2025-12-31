#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void merge(int arr[],int st,int mid,int end)
{
    vector<int>temp(end-st+1);
    int left=st,right=mid+1,i=0;
    while (left<=mid && right<=end)
    {
        if (arr[left]<=arr[right])
        {
           temp[i]=arr[left];
           i++,left++;
        }
        else  
        {
           temp[i]=arr[right];
           i++,right++;
        }
        
    }
    //when left side element left***
    while (left<=mid)
    {
        temp[i]=arr[left];
        i++,left++;
    }
    //when left side element left***
    while (right<=end)
    {
        temp[i]=arr[right];
        i++,right++;
    }
    
    i=0;
    while (st<=end)
    {
        arr[st]=temp[i];
        st++,i++;
    }
       
}

void mergesort(int arr[], int st,int end)
{
    if (st==end)
    {
      return;
    }
    int mid=st+(end-st)/2;
    //left
    mergesort(arr,st,mid);
    //right
    mergesort(arr,mid+1,end);
    //for merging after dividing
    merge(arr,st,mid,end);
}

int main() {
    int arr[]={6,3,1,2,8,9,10,7,3,10};
    mergesort(arr,0,9);
    for (int i = 0; i <10; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}