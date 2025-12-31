#include<bits/stdc++.h> 
using namespace std;

int main() {
     multimap<int,int>m;
    m.insert(make_pair(20,300));    
    m.insert(make_pair(20,55));
    m.insert(make_pair(30,32));
    m.insert(make_pair(30,32));
    m.insert(make_pair(45,32));
  
   
    for (auto i = m.begin(); i !=m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}