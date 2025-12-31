#include<bits/stdc++.h> 
using namespace std;

int main() {
    /*pair<string,int>p;
    p=make_pair("avi",1);
    cout<<p.first<<" "<<p.second<<endl; */

    pair<string,pair<int,int>>p;
    p.first="avi";
    p.second.first=1;
    p.second.second=22;

    cout<< p.first<<" "<<p.second.first<<" "<< p.second.second<<endl;

    return 0;
}