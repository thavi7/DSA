#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void swapping(int *p1,int *p2) {
int temp=*p1;
*p1=*p2;
*p2=temp;
}


int main() {
    //pointer in char
/* int arr[5]="1234";
    char *ptr=arr;
    cout<<arr<<endl;
    cout<<ptr<<endl; //it'll not give add

    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;
cout<<endl;
    char name='a';
    char *p=&name;
    cout<<(void*)p;
    cout<<(void*)&name; */


int first=10,second=20;
cout<<&first<<" "<<&second<<endl;
swapping(&first,&second);
cout<<first<<" "<<second<<endl;
cout<<&first<<" "<<&second;

    return 0;
}