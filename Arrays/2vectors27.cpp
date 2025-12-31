#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int>arr;
arr.push_back(1);
arr.push_back(5);
arr.push_back(9);
arr.push_back(2);
for (auto it = arr.begin(); it != arr.end(); it++)
{
    cout<<*it<<" ";
}
cout<<endl;
for ( auto i: arr)
{
    cout<<i<<" ";
}
/*
//sorting in inc order**
sort(arr.begin(),arr.end());
cout<<endl;

for (int i = 0; i <arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

//sorting in dec order**
sort(arr.begin(),arr.end(),greater<int>());
cout<<endl;

for (int i = 0; i <arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

//or
sort(arr.rbegin(),arr.rend());
cout<<endl;

for (int i = 0; i <arr.size(); i++)
{
    cout<<arr[i]<<" ";
} */
cout<<endl;

//search in binary search
cout<<binary_search(arr.begin(),arr.end(),5);
cout<<endl;
cout<<find(arr.begin(),arr.end(),9)-arr.begin()<<endl;  //find index
    return 0;
}