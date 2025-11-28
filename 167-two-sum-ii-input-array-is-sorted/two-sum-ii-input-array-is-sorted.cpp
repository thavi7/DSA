class Solution {
public:
    vector<int> twoSum(vector<int>& a, int x) {
        int n=a.size();
        
        int st=0,end=n-1;
        while(st<=end)
        {
            if(a[st]+a[end]==x)return {st+1,end+1};
             else if(a[st]+a[end]>x) end--;
             else  st++;
        }
        return {};
    }
};