#define ll long long
class Solution {
public:
    int minLength(vector<int>& a, int k) {
        int n=a.size();
        int l=0,r=0;
        int c=INT_MAX;
        if(k<=*max_element(a.begin(),a.end()))return 1;
        if(k>accumulate(a.begin(),a.end(),0LL)) return -1;

map<int,int>m;
int s=0;

    while(r<n){

        m[a[r]]++;

        if(m[a[r]]<=1){
            s+=a[r];
        }

        if(s>=k){
            while(s>=k)
            {
                c=min(c,r-l+1);
                m[a[l]]--;
                if(m[a[l]]<1){
                    s-=a[l];
                }
                l++;
            }
        }
        r++;
    }
        
        return c == INT_MAX ? -1 : c;
    }
};