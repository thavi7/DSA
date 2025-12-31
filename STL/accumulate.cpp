#include <bits/stdc++.h>
using namespace std;

int main() {
     
   int n;
   cin>>n;
   vector<int> v(n);
   for (auto &x : v) cin>>x;

   int sum = accumulate(v.begin(), v.end(), 0);

   int product = accumulate(v.begin(), v.end(), 1, multiplies<int>());

   int diff = accumulate(v.begin(), v.end(), 0, minus<int>());
   cout<<sum<<" "<<product<<" "<<diff<<endl;


     
    return 0;
}