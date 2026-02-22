class Solution {
public:
    int beauty(string s)
    {
        vector<int> freq(26, 0); 

    for(char c : s)freq[c - 'a']++;

    int h=INT_MIN,l=INT_MAX;
    for(int i=0;i<freq.size();i++)
    {
        if(freq[i]>h && freq[i]!=0)h=freq[i];
        if(freq[i]<l && freq[i]!=0)l=freq[i];
    }

    // cout<<freq[freq.size()-1]-freq[0]<<endl;
    
    return h-l;

    }
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                sum+=beauty(s.substr(i, j - i + 1));
            }
        }
        return sum;
    }
};