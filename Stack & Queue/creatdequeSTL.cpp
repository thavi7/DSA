#include<bits/stdc++.h> 
using namespace std;

int main() {
    deque<int>d;
    d.push_back(2);
    d.push_back(22);
    d.push_front(7);
    d.push_back(16);
    d.front();

    cout<<d.front()<<endl;
    cout<<d.back();
    return 0;
}