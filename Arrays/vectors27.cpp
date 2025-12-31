#include<iostream>
#include<vector>

using namespace std;

int main() {
    //declare vecotr
    vector<int>v;
    //size and capacity
    cout<<"size of v "<<v.size()<<endl;
    cout<<"capacity of v "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
     cout<<"size of v "<<v.size()<<endl;
    cout<<"capacity of v "<<v.capacity()<<endl;
    //update value
    v[1]=5;
    vector<int>v1(5,1);
    cout<<"size of v1 "<<v1.size()<<endl;
    cout<<"capacity of v1 "<<v1.capacity()<<endl;   //when we innitialize then size and capacity remain same

    v1.push_back(8);
     cout<<"size of v1 "<<v1.size()<<endl;
    cout<<"capacity of v1 "<<v1.capacity()<<endl;

    vector<int>v3= {1,2,3,4,5};
    cout<<"size of v3 "<<v3.size()<<endl;
    cout<<"capacity of v3 "<<v3.capacity()<<endl;


// delete value from vector

vector<int>v4;
v4.push_back(4);
v4.push_back(41);
v4.push_back(14);
v4.push_back(42);
v4.push_back(84);
 
v4.pop_back();
cout<<"size of v4 "<<v4.size()<<endl;
    cout<<"capacity of v4 "<<v4.capacity()<<endl;

    v4.erase(v4.begin()+1);
cout<<"size of v4 "<<v4.size()<<endl;
    cout<<"capacity of v4 "<<v4.capacity()<<endl;

    for ( int i = 0; i < v4.size(); i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    //insert value in a particular index
v4.insert(v4.begin()+1,50);
for ( int i = 0; i < v4.size(); i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;
v4.clear();
cout<<"size of v4 "<<v4.size()<<endl;
    cout<<"capacity of v4 "<<v4.capacity()<<endl; 



vector<int>arr;
arr.push_back(2);
arr.push_back(12);
arr.push_back(21);
arr.push_back(122);

cout<<arr.front()<<endl;
cout<<arr.back()<<endl;
cout<<arr[arr.size()-1]<<endl;


vector<int>a;
//coping vector value to another vector

a = arr;
cout<<a.size();


    return 0;
}