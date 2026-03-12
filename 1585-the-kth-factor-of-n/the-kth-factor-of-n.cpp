class Solution {
public:
vector<long long> factors(int n){
vector<long long>a;
for(long long i = 1; i * i <= n; i++) {
  if(n % i == 0) {
      a.push_back(i);
      if(i != n / i)   
          a.push_back(n / i);
  }
}

 sort(a.begin(), a.end());
return a;

}
    int kthFactor(int n, int k) {
       vector<long long>a= factors(n);
       if(k<=a.size())return a[k-1];
       else return -1;
    }
};