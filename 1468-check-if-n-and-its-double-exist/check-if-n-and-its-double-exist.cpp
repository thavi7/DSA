class Solution {
public:
    bool checkIfExist(vector<int>& a) {
        int n=a.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(m[a[i]*2]  || (a[i]%2==0 && m[a[i]/2] ) )return 1;

            m[a[i]]++;
        }
        return 0;
    }
};