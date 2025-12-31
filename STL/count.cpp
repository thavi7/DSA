#include <bits/stdc++.h>
using namespace std;

int main() {
     
    int n,x;
   cin>>n>>x;
   vector<int> v(n);
   for (auto &x : v) cin>>x;
    int c = count(v.begin(), v.end(), x);

    cout<<c;

     
    return 0;
}