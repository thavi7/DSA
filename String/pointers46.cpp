#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    int *ptr = arr;
    //print 1st element add
   /* cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    cout<<endl;
    //print the add of 2nd element
    cout<<&arr[1]<<endl;
    cout<<arr+1<<endl;
    cout<<ptr+1<<endl<<endl;
    //print the value of 0th index
    cout<<arr[0]<<endl;
    cout<<*(arr)<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl<<endl;
    //print the value of 2nd index
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(ptr+2)<<endl<<endl;
    //print all add
    for (int i = 0; i < 5; i++)
    {
        cout<<arr+i<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<ptr+i<<" ";
    }
    cout<<endl;
    //print all values
    for (int i = 0; i < 5; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<*(ptr+i)<<" ";
        
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i]<<" ";
        
    }  
    cout<<endl; */
    //by arithmatic operation 
 /* for (int i = 0; i < 5; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    } */
    cout<<endl;
    //addition
    ptr=ptr+3;
    cout<<*ptr<<endl;
    ptr=ptr-2;
    cout<<*ptr;
    return 0;
}