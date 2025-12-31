#include<bits/stdc++.h> 
using namespace std;

int main() {
    set<int,greater<int>>s;
    s.insert(20);
    s.insert(3);
    s.insert(20);
    s.insert(77);
    s.insert(12);
    s.insert(1);
    s.insert(31);
    s.erase(31);
    for (auto i = s.begin(); i!=s.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    if (s.find(2)!=s.end())
    {
        cout<<"gotta!"<<endl;
    }
    else{
        cout<<"fuck u"<<endl;
    }

    if(s.count(1))
    {
        cout<<"gotta!\n";
    }
    
    
    return 0;
}