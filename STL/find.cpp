#include <bits/stdc++.h>
using namespace std;

int main() {
     
   int n;
   cin>>n;
   vector<int> v(n);
   for (auto &x : v) cin>>x;

   int x;
   cin>>x;

   auto it = find(v.begin(), v.end(), x);
if (it != v.end()) cout << "Found";

     
    return 0;
}