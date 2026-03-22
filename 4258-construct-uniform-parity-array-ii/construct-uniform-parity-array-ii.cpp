class Solution {
public:
    bool uniformArray(vector<int>& a) {
     int n=a.size();
     int od=0,ev=0;
     
     sort(a.begin(),a.end());
     //ev
     if(a[0]%2==0)
     {
        for(int i=n-1;i>=0;i--)
     {
        if(a[i]%2){
            od++;
        }
     }
     if(od)return 0;
     else return 1;
     
     }
     if(a[0]%2!=0)
     {
        return 1;
     }


return -1;


    }
};