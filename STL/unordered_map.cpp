#include<bits/stdc++.h> 
using namespace std;

int main() {
    unordered_map<int,int>m;
     
    m.insert(make_pair(20,300));
    m.insert(make_pair(30,32));
    m[50]=60;
    m.insert(make_pair(23,55));
    m[20]=70;
    m.erase(23);
    for (auto i = m.begin(); i !=m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}