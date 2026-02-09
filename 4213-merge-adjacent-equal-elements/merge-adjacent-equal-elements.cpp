class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& a) {
        stack<long long>s;
        int n=a.size();
        int i=0;
        while(i<n)
        {
            long long x=a[i];
            
                while(!s.empty() && x==s.top())
                {
                    s.pop();
                x=2*x;
                }
            
             s.push(x);
            i++;
        }
        vector<long long>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};