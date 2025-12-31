#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int *p;
    int a=10;
    p=&a; //a's size stored in p
    cout<<&a<<endl; //will print add of a
    cout<<p<<endl; //will print add of a, as we stored it in p
    cout<<*p<<endl; //will go to that add whats in p, then will print that value stroed in that add
    cout<<sizeof(p)<<endl<<endl; //will print the size which is not depends on datatype
 
    int b=20;
    int *ptr=&b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    int c=40;
    ptr=&c;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;


    return 0;
}