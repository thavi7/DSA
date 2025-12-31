#include<bits/stdc++.h> 
using namespace std;

int main() {
    list<int>l;
    l.push_back(300);
    l.push_back(15);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(80);
    l.push_back(100);
    l.pop_front();
    l.pop_back();


    cout<<l.front()<<" "<<l.back()<<" "<<l.size()<<endl;

    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl<<endl;;
    for (auto i = l.rbegin(); i != l.rend(); i++)
    {
        cout<<*i<<" ";
    }
    

    return 0;
}