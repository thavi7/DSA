#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    //variable k liye heap memory allocate**
    int *ptr = new int;
    *ptr=5;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    float *ptr2= new float;
    *ptr2=3.6;
    cout<<*ptr2<<endl;

   int n;
   cout<<"enter n"<<endl;
   cin>>n;
   int *ptr3= new int[n];

   for (int i = 0; i < n; i++)
   {
     ptr3[i]=i+1;

   }
   for (int i = 0; i < n; i++)
   {
     cout<<ptr3[i];
     
   }
   
//delete

delete ptr;
delete ptr2;
delete[] ptr3;






    return 0;
}