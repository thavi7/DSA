class Solution {
public:
bool check(string a, string b) {
        int freq[26] = {0};

        for(char c : a)freq[c - 'a'] = 1;
        for(char c : b)
            if(freq[c - 'a']) return true;

        return false;
    }
//ami bokachodaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    int maxProduct(vector<string>& a) {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(!check(a[i], a[j])) {
                ans = max(ans,(int)a[i].size() * (int)a[j].size());
            }
        }
    }
    return ans;
    }
};