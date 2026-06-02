class Solution {
public:
int c(vector<int>& a, int x,int n,int i){
    if(i==n){
        if(x==0)return 1;
        else return 0;
    }

    return c(a,x-a[i],n,i+1) + c(a,x+a[i],n,i+1) ;
}
    int findTargetSumWays(vector<int>& a, int x) {
        int n=a.size();
        return c(a,x,n,0);
    }
};