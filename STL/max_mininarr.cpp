#include <bits/stdc++.h>
using namespace std;

int main() {
     
   int n;
   cin>>n;
   vector<int> v(n);
   for (auto &x : v) cin>>x;
   
int mx = *max_element(v.begin(), v.end());
int mn = *min_element(v.begin(), v.end());
cout<<mx<<" "<<mn<<endl;
     
    return 0;
}