#include<bits/stdc++.h> 
using namespace std;

int main() {
    multiset<int>m;
    m.insert(10);
    m.insert(29);
    m.insert(10);
    for (auto i = m.begin(); i!=m.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}