class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
           int n=arr.size();
        int total=0;
        unordered_map<int,int>m;
        int s=0;
        m[0]=1;
        
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            if(m.count(s-k))
            {
                total+=m[s-k];
            }
                m[s]++;
        }
        return total;
    }
};